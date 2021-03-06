/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:57 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKComponent, NSArray, NSString;

@interface FIGMenuActionSheetModel : NSObject {

	unsigned long long _style;
	CKComponent* _customComponent;
	NSArray* _actionItems;
	NSString* _title;
	NSString* _backButtonTitle;
	NSString* _subtitle;

}

@property (nonatomic,copy,readonly) NSArray * actionItems;                      //@synthesize actionItems=_actionItems - In the implementation block
@property (nonatomic,readonly) unsigned long long style;                        //@synthesize style=_style - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * backButtonTitle;                 //@synthesize backButtonTitle=_backButtonTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                        //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) CKComponent * customComponent;              //@synthesize customComponent=_customComponent - In the implementation block
+(id)subActionSheetWithTitle:(id)arg1 subtitle:(id)arg2 customComponent:(id)arg3 actionItems:(id)arg4 backButtonTitle:(id)arg5 style:(unsigned long long)arg6 ;
-(CKComponent *)customComponent;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 customComponent:(id)arg3 actionItems:(id)arg4 backButtonTitle:(id)arg5 style:(unsigned long long)arg6 ;
-(NSString *)title;
-(unsigned long long)style;
-(NSString *)backButtonTitle;
-(NSString *)subtitle;
-(NSArray *)actionItems;
@end

