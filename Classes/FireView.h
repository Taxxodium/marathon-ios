//
//  FireView.h
//  AlephOne
//
//  Created by Daniel Blezek on 8/12/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SDL_uikitopenglview.h"
#include "SDL_keyboard.h"

@interface FireView : UIView {
  SDLKey fireKey;
}

- (void)setup:(bool)isLeftFireButton;

@end