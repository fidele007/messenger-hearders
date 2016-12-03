/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPlatformActionOperationDelegate.h>

@protocol FBPlatformShareDataLoadListener, FBPlatformActionProcessorDelegate;
@class FBPlatformShareComposingBundle, NSMutableArray, FBPlatformAction, FBComposerAppAttribution, NSString, FBAsyncTransaction;

@interface FBPlatformActionProcessor : NSObject <FBPlatformActionOperationDelegate> {

	FBPlatformShareComposingBundle* _composingBundle;
	NSMutableArray* _operations;
	BOOL _hasPublishPermissions;
	BOOL _TOSed;
	FBPlatformAction* _action;
	FBComposerAppAttribution* _appAttribution;
	NSString* _channel;
	id<FBPlatformShareDataLoadListener> _dataLoadListener;
	id<FBPlatformActionProcessorDelegate> _delegate;
	FBAsyncTransaction* _processingTransaction;
	NSString* _previewPropertyName;
	NSString* _sharedObjectFBID;
	unsigned long long _state;

}

@property (nonatomic,retain) FBAsyncTransaction * processingTransaction;                               //@synthesize processingTransaction=_processingTransaction - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                                 //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) FBPlatformAction * action;                                              //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) FBComposerAppAttribution * appAttribution;                              //@synthesize appAttribution=_appAttribution - In the implementation block
@property (nonatomic,copy) NSString * channel;                                                         //@synthesize channel=_channel - In the implementation block
@property (nonatomic,copy,readonly) FBPlatformShareComposingBundle * composingBundle; 
@property (assign,nonatomic,__weak) id<FBPlatformShareDataLoadListener> dataLoadListener;              //@synthesize dataLoadListener=_dataLoadListener - In the implementation block
@property (assign,nonatomic,__weak) id<FBPlatformActionProcessorDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL hasPublishPermissions;                                               //@synthesize hasPublishPermissions=_hasPublishPermissions - In the implementation block
@property (nonatomic,copy) NSString * previewPropertyName;                                             //@synthesize previewPropertyName=_previewPropertyName - In the implementation block
@property (nonatomic,copy) NSString * sharedObjectFBID;                                                //@synthesize sharedObjectFBID=_sharedObjectFBID - In the implementation block
@property (assign,getter=isTOSed,nonatomic) BOOL TOSed;                                                //@synthesize TOSed=_TOSed - In the implementation block
-(void)setDataLoadListener:(id<FBPlatformShareDataLoadListener>)arg1 ;
-(BOOL)isTOSed;
-(FBPlatformShareComposingBundle *)composingBundle;
-(void)requireOperation:(id)arg1 ;
-(NSString *)previewPropertyName;
-(NSString *)sharedObjectFBID;
-(BOOL)allDataLoaded;
-(id<FBPlatformShareDataLoadListener>)dataLoadListener;
-(void)failWithInvalidParameterErrorResponse:(id)arg1 ;
-(void)setSharedObjectFBID:(NSString *)arg1 ;
-(void)setPreviewPropertyName:(NSString *)arg1 ;
-(FBComposerAppAttribution *)appAttribution;
-(void)dataDidLoad;
-(void)_cancelOperations;
-(void)setProcessingTransaction:(FBAsyncTransaction *)arg1 ;
-(void)_failWithErrorCode:(long long)arg1 errorMessage:(id)arg2 errorResponse:(id)arg3 ;
-(void)setTOSed:(BOOL)arg1 ;
-(BOOL)hasPublishPermissions;
-(void)setHasPublishPermissions:(BOOL)arg1 ;
-(void)platformActionOperation:(id)arg1 didFailWithErrorCode:(unsigned long long)arg2 errorMessage:(id)arg3 errorResponse:(id)arg4 ;
-(void)platformActionOperationDidComplete:(id)arg1 ;
-(FBAsyncTransaction *)processingTransaction;
-(void)cancel;
-(void)setDelegate:(id<FBPlatformActionProcessorDelegate>)arg1 ;
-(void)dealloc;
-(id<FBPlatformActionProcessorDelegate>)delegate;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(FBPlatformAction *)action;
-(id)sharedObject;
-(id)initWithAction:(id)arg1 ;
-(void)processOperationResult:(id)arg1 ;
-(void)setChannel:(NSString *)arg1 ;
-(NSString *)channel;
-(id)publishingBundle;
-(void)process;
@end
