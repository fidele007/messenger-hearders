/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface FBBrowserLayoutSearchBoxConfig : NSObject <NSCopying> {

	unsigned long long _subtype;
	UIColor* _tappableSearchBox_normalFill;
	UIColor* _tappableSearchBox_pressedFill;
	UIColor* _tappableSearchBox_tint;
	UIColor* _tappableSearchBox_accessoryTint;
	BOOL _tappableSearchBox_hasRightAccessory;
	UIColor* _nontappableSearchBox_fill;
	UIColor* _nontappableSearchBox_tint;
	UIColor* _nontappableSearchBox_accessoryTint;
	BOOL _nontappableSearchBox_hasRightAccessory;

}
+(id)nontappableSearchBoxWithFill:(id)arg1 tint:(id)arg2 accessoryTint:(id)arg3 hasRightAccessory:(BOOL)arg4 ;
+(id)tappableSearchBoxWithNormalFill:(id)arg1 pressedFill:(id)arg2 tint:(id)arg3 accessoryTint:(id)arg4 hasRightAccessory:(BOOL)arg5 ;
-(void)matchTappableSearchBox:(/*^block*/id)arg1 nontappableSearchBox:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

