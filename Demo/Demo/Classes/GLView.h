//
//  GLView.h
//  Demo
//
//  Created by chars on 2017/2/7.
//  Copyright (c) 2017年 ZAKER. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <OpenGLES/EAGL.h>
#import <OpenGLES/ES1/gl.h>
#import <OpenGLES/ES1/glext.h>

@protocol GLViewDelegate

- (void)drawView:(UIView *)theView;
- (void)setupView:(UIView *)theView;

@end

@interface GLView : UIView
{
    @private

    GLint backingWidth;
    GLint backingHeight;

    EAGLContext *context;
    GLuint viewRenderbuffer, viewFramebuffer;
    GLuint depthRenderbuffer;
}

@property (nonatomic, assign) NSTimeInterval animationInterval;
@property (nonatomic, weak) /* weak ref */ id <GLViewDelegate> delegate;

- (void)startAnimation;
- (void)stopAnimation;
- (void)drawView;

@end
