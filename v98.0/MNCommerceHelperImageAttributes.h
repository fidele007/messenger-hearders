/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface MNCommerceHelperImageAttributes : FBValueObject <NSCopying> {

	double _cornerRadius;
	double _strokeWidth;
	UIColor* _strokeColor;

}

@property (nonatomic,readonly) double cornerRadius;                     //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,readonly) double strokeWidth;                      //@synthesize strokeWidth=_strokeWidth - In the implementation block
@property (nonatomic,copy,readonly) UIColor * strokeColor;              //@synthesize strokeColor=_strokeColor - In the implementation block
-(id)initWithCornerRadius:(double)arg1 strokeWidth:(double)arg2 strokeColor:(id)arg3 ;
-(double)cornerRadius;
-(UIColor *)strokeColor;
-(double)strokeWidth;
@end
