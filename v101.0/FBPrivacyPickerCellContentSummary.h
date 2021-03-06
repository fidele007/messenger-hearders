/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:21 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL, UIImage;

@interface FBPrivacyPickerCellContentSummary : FBValueObject <NSCopying> {

	BOOL _selected;
	BOOL _enabled;
	BOOL _editable;
	NSString* _title;
	NSString* _subtitle;
	NSURL* _imageURL;
	UIImage* _cellImage;

}

@property (nonatomic,copy,readonly) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;              //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSURL * imageURL;                 //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,copy,readonly) UIImage * cellImage;              //@synthesize cellImage=_cellImage - In the implementation block
@property (nonatomic,readonly) BOOL selected;                         //@synthesize selected=_selected - In the implementation block
@property (nonatomic,readonly) BOOL enabled;                          //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) BOOL editable;                         //@synthesize editable=_editable - In the implementation block
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 imageURL:(id)arg3 cellImage:(id)arg4 selected:(BOOL)arg5 enabled:(BOOL)arg6 editable:(BOOL)arg7 ;
-(UIImage *)cellImage;
-(BOOL)enabled;
-(NSString *)title;
-(NSString *)subtitle;
-(BOOL)editable;
-(BOOL)selected;
-(NSURL *)imageURL;
@end

