/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:53 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface MNBrowserLayoutExperimentContext : FBExperimentContext {

	BOOL _minimizableModals;
	BOOL _burdLayoutForBrowser;
	BOOL _browserAsAMinimizableModal;

}

@property (assign,nonatomic) BOOL minimizableModals;                       //@synthesize minimizableModals=_minimizableModals - In the implementation block
@property (assign,nonatomic) BOOL burdLayoutForBrowser;                    //@synthesize burdLayoutForBrowser=_burdLayoutForBrowser - In the implementation block
@property (assign,nonatomic) BOOL browserAsAMinimizableModal;              //@synthesize browserAsAMinimizableModal=_browserAsAMinimizableModal - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)browserAsAMinimizableModal;
-(BOOL)burdLayoutForBrowser;
-(BOOL)minimizableModals;
-(void)setMinimizableModals:(BOOL)arg1 ;
-(void)setBurdLayoutForBrowser:(BOOL)arg1 ;
-(void)setBrowserAsAMinimizableModal:(BOOL)arg1 ;
@end
