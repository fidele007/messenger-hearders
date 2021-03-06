/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBQuicksilverPlayerInfoLabelAttributes;

@interface FBQuicksilverPlayerInfoLabelViewModel : FBValueObject <NSCopying> {

	FBQuicksilverPlayerInfoLabelAttributes* _title;
	FBQuicksilverPlayerInfoLabelAttributes* _subtitle;
	FBQuicksilverPlayerInfoLabelAttributes* _body;

}

@property (nonatomic,copy,readonly) FBQuicksilverPlayerInfoLabelAttributes * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) FBQuicksilverPlayerInfoLabelAttributes * subtitle;              //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) FBQuicksilverPlayerInfoLabelAttributes * body;                  //@synthesize body=_body - In the implementation block
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 body:(id)arg3 ;
-(FBQuicksilverPlayerInfoLabelAttributes *)title;
-(FBQuicksilverPlayerInfoLabelAttributes *)subtitle;
-(FBQuicksilverPlayerInfoLabelAttributes *)body;
@end

