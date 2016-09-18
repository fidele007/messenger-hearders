/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface MNMessagesTitleViewConfiguration : FBValueObject <NSCopying> {

	UIColor* _titleColor;
	UIColor* _subtitleColor;
	/*^block*/id _nonActiveUserSubtitleTextGenerator;

}

@property (nonatomic,copy,readonly) UIColor * titleColor;                          //@synthesize titleColor=_titleColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * subtitleColor;                       //@synthesize subtitleColor=_subtitleColor - In the implementation block
@property (nonatomic,readonly) id nonActiveUserSubtitleTextGenerator;              //@synthesize nonActiveUserSubtitleTextGenerator=_nonActiveUserSubtitleTextGenerator - In the implementation block
-(id)initWithTitleColor:(id)arg1 subtitleColor:(id)arg2 nonActiveUserSubtitleTextGenerator:(/*^block*/id)arg3 ;
-(id)nonActiveUserSubtitleTextGenerator;
-(UIColor *)titleColor;
-(UIColor *)subtitleColor;
@end

