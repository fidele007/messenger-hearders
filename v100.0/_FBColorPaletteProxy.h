/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBColorPaletteConfig;

@interface _FBColorPaletteProxy : NSObject {

	Class _configProvider;
	FBColorPaletteConfig* _config;

}
+(id)newWithConfigProvider:(Class)arg1 ;
-(void)accessibilityDarkerSystemColorsStatusDidChange:(id)arg1 ;
-(id)_initWithConfigProvider:(Class)arg1 ;
-(void)_setupObservers;
-(void)dealloc;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
@end

