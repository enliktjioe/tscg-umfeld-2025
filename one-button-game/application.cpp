#include "Umfeld.h"
#include "Geometry.h"

using namespace umfeld;

const color_t sky      = color(0.5f, 0.85f, 1.0f);
const color_t ground_c = color(0.2f, 0.6f, 0.2f);
const color_t player_c = color(1.0f, 0.25f, 0.35f);

float player_x   = 200.0f;
float player_y   = 400.0f;
float player_vy  = 0.0f;
float gravity    = 1200.0f;
float jump_speed = -600.0f;
float floor_y    = 400.0f;

bool on_ground   = true;

void settings() {
    size(800, 600);
}

void setup() {
    noStroke();
    rectMode(CENTER);
    textSize(16);
}

void draw() {
    // Background
    background(sky);

    // Use fixed timestep instead of deltaTime
    const float dt = 1.0f / 60.0f;

    // Simple physics
    player_vy += gravity * dt;
    player_y  += player_vy * dt;

    if (player_y > floor_y) {
        player_y  = floor_y;
        player_vy = 0.0f;
        on_ground = true;
    }

    // Ground
    fill(ground_c);
    rect(400, floor_y + 50, 800, 100);

    // Player
    fill(player_c);
    rect(player_x, player_y - 25, 50, 50);

    // HUD
    fill(0.0f);
    debug_text("One-button game (SPACE to jump)", 10, 20);
}

// One-button input: SPACE
void keyPressed() {
    if (key == ' ') {
        if (on_ground) {
            player_vy = jump_speed;
            on_ground = false;
        }
    }
}
