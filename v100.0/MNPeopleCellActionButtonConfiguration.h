/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIImage;

@interface MNPeopleCellActionButtonConfiguration : FBValueObject <NSCopying> {

	BOOL _actionButtonHasBorders;
	BOOL _isActionButtonCancelable;
	NSString* _actionButtonTitle;
	NSString* _actionButtonDisabledTitle;
	UIImage* _actionButtonImage;
	double _cancelableTimeWindow;

}

@property (nonatomic,copy,readonly) NSString * actionButtonTitle;                      //@synthesize actionButtonTitle=_actionButtonTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionButtonDisabledTitle;              //@synthesize actionButtonDisabledTitle=_actionButtonDisabledTitle - In the implementation block
@property (nonatomic,readonly) BOOL actionButtonHasBorders;                            //@synthesize actionButtonHasBorders=_actionButtonHasBorders - In the implementation block
@property (nonatomic,copy,readonly) UIImage * actionButtonImage;                       //@synthesize actionButtonImage=_actionButtonImage - In the implementation block
@property (nonatomic,readonly) BOOL isActionButtonCancelable;                          //@synthesize isActionButtonCancelable=_isActionButtonCancelable - In the implementation block
@property (nonatomic,readonly) double cancelableTimeWindow;                            //@synthesize cancelableTimeWindow=_cancelableTimeWindow - In the implementation block
-(id)initWithActionButtonTitle:(id)arg1 actionButtonDisabledTitle:(id)arg2 actionButtonHasBorders:(BOOL)arg3 actionButtonImage:(id)arg4 isActionButtonCancelable:(BOOL)arg5 cancelableTimeWindow:(double)arg6 ;
-(BOOL)isActionButtonCancelable;
-(double)cancelableTimeWindow;
-(NSString *)actionButtonDisabledTitle;
-(UIImage *)actionButtonImage;
-(BOOL)actionButtonHasBorders;
-(NSString *)actionButtonTitle;
@end

