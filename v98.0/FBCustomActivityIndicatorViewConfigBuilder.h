/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBUIConfigBuilder.h>

@class UIColor, NSString;

@interface FBCustomActivityIndicatorViewConfigBuilder : NSObject <FBUIConfigBuilder> {

	unsigned long long _style;
	BOOL _hidesWhenStopped;
	BOOL _animates;
	UIColor* _tintColor;
	UIColor* _backgroundColor;

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
-(id)setStyle:(unsigned long long)arg1 ;
-(id)setTintColor:(id)arg1 ;
-(id)setHidesWhenStopped:(BOOL)arg1 ;
-(id)setAnimates:(BOOL)arg1 ;
-(id)build;
@end
