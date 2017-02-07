//
//  ___FILENAME___
//  ___PACKAGENAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//  Copyright (c) ___YEAR___ ___ORGANIZATIONNAME___. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <OpenGLES/EAGL.h>
#import <OpenGLES/ES1/gl.h>
#import <OpenGLES/ES1/glext.h>

@interface OpenGLTexture3D : NSObject {
    GLuint texture[1];
    NSString *filename;
}

@property (nonatomic, copy) NSString *filename;

- (id)initWithFilename:(NSString *)inFilename width:(GLuint)inWidth height:(GLuint)inHeight;
- (void)bind;
+ (void)useDefaultTexture;

@end
