//
//  ViewController.m
//  LEApp
//
//  Created by PP on 8/15/16.
//  Copyright © 2016 Zunware. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    LEManager* f = [[LEManager alloc] init];
    [f helloWorld];
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
