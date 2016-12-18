/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIImage;

@interface MNGroupsRoomsSectionHeaderCellViewModel : FBValueObject <NSCopying> {

	BOOL _showsTopSeparator;
	BOOL _showsBottomSeparator;
	NSString* _title;
	unsigned long long _viewModelType;
	UIImage* _titleImage;

}

@property (nonatomic,copy,readonly) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) unsigned long long viewModelType;              //@synthesize viewModelType=_viewModelType - In the implementation block
@property (nonatomic,readonly) BOOL showsTopSeparator;                        //@synthesize showsTopSeparator=_showsTopSeparator - In the implementation block
@property (nonatomic,readonly) BOOL showsBottomSeparator;                     //@synthesize showsBottomSeparator=_showsBottomSeparator - In the implementation block
@property (nonatomic,copy,readonly) UIImage * titleImage;                     //@synthesize titleImage=_titleImage - In the implementation block
-(id)initWithTitle:(id)arg1 viewModelType:(unsigned long long)arg2 showsTopSeparator:(BOOL)arg3 showsBottomSeparator:(BOOL)arg4 titleImage:(id)arg5 ;
-(unsigned long long)viewModelType;
-(NSString *)title;
-(UIImage *)titleImage;
-(BOOL)showsBottomSeparator;
-(BOOL)showsTopSeparator;
@end

