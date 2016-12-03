/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
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
