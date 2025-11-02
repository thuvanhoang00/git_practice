#pragma once

void bar(int n){
    if(n<1) return;

    bar(n-1);
}