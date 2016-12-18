/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FIGActionSheetMenuItemActionHandler;
@class FIGActionSheetButtonItem, FIGActionSheetMetrics, CKComponent, NSArray, NSString;

@interface FIGActionSheetModel : NSObject {

	FIGActionSheetButtonItem* _cancelItem;
	FIGActionSheetMetrics* _metrics;
	unsigned long long _style;
	CKComponent* _customComponent;
	BOOL _isChildActionSheet;
	NSArray* _actionItems;
	NSString* _backButtonTitle;
	id<FIGActionSheetMenuItemActionHandler> _menuActionHandler;
	NSString* _title;
	NSString* _subtitle;

}

@property (nonatomic,copy,readonly) NSArray * actionItems;                                                    //@synthesize actionItems=_actionItems - In the implementation block
@property (nonatomic,readonly) FIGActionSheetButtonItem * cancelItem;                                         //@synthesize cancelItem=_cancelItem - In the implementation block
@property (nonatomic,readonly) FIGActionSheetMetrics * metrics;                                               //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,readonly) unsigned long long style;                                                      //@synthesize style=_style - In the implementation block
@property (nonatomic,copy,readonly) NSString * backButtonTitle;                                               //@synthesize backButtonTitle=_backButtonTitle - In the implementation block
@property (nonatomic,__weak,readonly) id<FIGActionSheetMenuItemActionHandler> menuActionHandler;              //@synthesize menuActionHandler=_menuActionHandler - In the implementation block
@property (nonatomic,readonly) BOOL isChildActionSheet;                                                       //@synthesize isChildActionSheet=_isChildActionSheet - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                                                      //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) CKComponent * customComponent;                                            //@synthesize customComponent=_customComponent - In the implementation block
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 customComponent:(id)arg3 actionItems:(id)arg4 cancelItem:(id)arg5 backButtonTitle:(id)arg6 menuActionHandler:(id)arg7 isChildActionSheet:(BOOL)arg8 metrics:(id)arg9 style:(unsigned long long)arg10 ;
-(FIGActionSheetButtonItem *)cancelItem;
-(id<FIGActionSheetMenuItemActionHandler>)menuActionHandler;
-(BOOL)isChildActionSheet;
-(CKComponent *)customComponent;
-(NSString *)title;
-(unsigned long long)style;
-(NSString *)backButtonTitle;
-(NSString *)subtitle;
-(FIGActionSheetMetrics *)metrics;
-(NSArray *)actionItems;
@end

