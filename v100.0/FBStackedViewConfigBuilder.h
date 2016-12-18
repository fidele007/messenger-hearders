/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBUIConfigBuilder.h>

@class UIColor, UIView, NSString;

@interface FBStackedViewConfigBuilder : NSObject <FBUIConfigBuilder> {

	UIColor* _backgroundColor;
	UIView* _backgroundView;
	UIEdgeInsets _edgeInsets;
	unsigned long long _layoutType;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)builderFromConfig:(id)arg1 ;
+(id)builderForInstance:(id)arg1 ;
+(id)builderIgnoringClassLevelOverrides;
+(id)builder;
-(id)setBackgroundColor:(id)arg1 ;
-(id)_init;
-(id)setBackgroundView:(id)arg1 ;
-(id)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(id)build;
-(id)setLayoutType:(unsigned long long)arg1 ;
@end
