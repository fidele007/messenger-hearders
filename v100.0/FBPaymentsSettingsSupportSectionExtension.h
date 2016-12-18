/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBModalWebFlowDelegate.h>
#import <Messenger/FBPaymentsSettingsSectionExtension.h>
#import <Messenger/FBPaymentsTableViewSection.h>

@protocol FBPaymentsSettingsSupportSectionExtensionConfigurable, FBPaymentsTableViewSectionDelegate, FBPaymentsNavigationDelegate, FBModalWebFlowDelegate;
@class FBUserSession, NSArray, NSString;

@interface FBPaymentsSettingsSupportSectionExtension : NSObject <FBModalWebFlowDelegate, FBPaymentsSettingsSectionExtension, FBPaymentsTableViewSection> {

	FBUserSession* _session;
	id<FBPaymentsSettingsSupportSectionExtensionConfigurable> _configuration;
	NSArray* _URLActionCellViewModels;
	id<FBPaymentsTableViewSectionDelegate> _sectionDelegate;
	id<FBPaymentsNavigationDelegate> _navigationDelegate;
	id<FBModalWebFlowDelegate> _modalWebFlowDelegate;
	UIEdgeInsets _edgeInsets;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) UIEdgeInsets edgeInsets;                                                    //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsTableViewSectionDelegate> sectionDelegate;              //@synthesize sectionDelegate=_sectionDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate;                 //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBModalWebFlowDelegate> modalWebFlowDelegate;                     //@synthesize modalWebFlowDelegate=_modalWebFlowDelegate - In the implementation block
-(void)modalWebFlowControllerDidCancel:(id)arg1 ;
-(BOOL)shouldHighlightCellForRowAtIndex:(unsigned long long)arg1 ;
-(void)commitEditingStyle:(long long)arg1 forRowAtRowIndex:(unsigned long long)arg2 ;
-(id)titleForDeleteConfirmationButtonForRowAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)interestedDataTypes;
-(id<FBModalWebFlowDelegate>)modalWebFlowDelegate;
-(void)setModalWebFlowDelegate:(id<FBModalWebFlowDelegate>)arg1 ;
-(id)previewingContext:(id)arg1 forRowAtRowIndex:(unsigned long long)arg2 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 forRowAtRowIndex:(unsigned long long)arg3 ;
-(id)sectionHeaderViewModel;
-(id)cellForSectionRowAtIndex:(unsigned long long)arg1 ;
-(double)heightForSectionRowAtIndex:(unsigned long long)arg1 ;
-(void)handleSelectActionForRowAtIndex:(unsigned long long)arg1 ;
-(void)acceptSectionConfiguration:(id)arg1 ;
-(void)_presentWebViewWithURL:(id)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(unsigned long long)numberOfRows;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<FBPaymentsNavigationDelegate>)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(void)tearDown;
-(void)setSectionDelegate:(id<FBPaymentsTableViewSectionDelegate>)arg1 ;
-(id<FBPaymentsTableViewSectionDelegate>)sectionDelegate;
-(void)setUp;
-(long long)editingStyleForRowAtIndex:(unsigned long long)arg1 ;
@end

