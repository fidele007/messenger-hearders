/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface FBInstantGameProfileImageViewConfiguration : FBValueObject <NSCopying> {

	double _roundedImageDiameter;
	double _borderWidth;
	UIColor* _placeholderColor;
	UIColor* _borderColor;

}

@property (nonatomic,readonly) double roundedImageDiameter;                  //@synthesize roundedImageDiameter=_roundedImageDiameter - In the implementation block
@property (nonatomic,readonly) double borderWidth;                           //@synthesize borderWidth=_borderWidth - In the implementation block
@property (nonatomic,copy,readonly) UIColor * placeholderColor;              //@synthesize placeholderColor=_placeholderColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * borderColor;                   //@synthesize borderColor=_borderColor - In the implementation block
-(id)initWithRoundedImageDiameter:(double)arg1 borderWidth:(double)arg2 placeholderColor:(id)arg3 borderColor:(id)arg4 ;
-(double)roundedImageDiameter;
-(UIColor *)borderColor;
-(double)borderWidth;
-(UIColor *)placeholderColor;
@end

