/*
 * This file is part of Gorillas.
 *
 *  Gorillas is open software: you can use or modify it under the
 *  terms of the Java Research License or optionally a more
 *  permissive Commercial License.
 *
 *  Gorillas is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 *  You should have received a copy of the Java Research License
 *  along with Gorillas in the file named 'COPYING'.
 *  If not, see <http://stuff.lhunath.com/COPYING>.
 */

//
//  Throw.h
//  Gorillas
//
//  Created by Maarten Billemont on 22/11/08.
//  Copyright 2008-2009, lhunath (Maarten Billemont). All rights reserved.
//

#import "ThrowController.h"


@interface ThrowAction : CCActionInterval {

@private
    CGPoint                                     _v;
    CGPoint                                     _r0;
    BOOL                                        _needsReplay;
    
    CCParticleSystem                            *_smoke;
}

@property (nonatomic, assign) CGPoint           v;
@property (nonatomic, assign) CGPoint           r0;
@property (nonatomic, assign) BOOL              needsReplay;
@property (nonatomic, retain) CCParticleSystem  *smoke;

+(ThrowAction *) actionWithVelocity:(CGPoint)velocity duration:(ccTime)aDuration needsReplay:(BOOL)aNeedsReplay;
-(ThrowAction *) initWithVelocity:(CGPoint)velocity duration:(ccTime)aDuration needsReplay:(BOOL)aNeedsReplay;

@end
