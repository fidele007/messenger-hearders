/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/SCNNodeRendererDelegate.h>

@class NSString;

@interface BlendModeInjector : NSObject <SCNNodeRendererDelegate> {

	int _blendMode;

}

@property (assign) int blendMode;                                   //@synthesize blendMode=_blendMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(int)blendMode;
-(void)setBlendMode:(int)arg1 ;
-(void)renderNode:(id)arg1 renderer:(id)arg2 arguments:(id)arg3 ;
@end

