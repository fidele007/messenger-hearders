/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNPaymentsPeerToPeerPaymentRequestCoordinatorListener.h>
#import <Messenger/MNPaymentsHistoryDataRetriever.h>

@protocol MNPaymentsHistoryDataRetrieverDelegate;
@class FBGraphQLService, FBMemPageInfo, NSArray, MNPaymentsPeerToPeerPaymentRequestCoordinator, NSString;

@interface MNPaymentsPeerToPeerRequestHistoryDataRetriever : NSObject <MNPaymentsPeerToPeerPaymentRequestCoordinatorListener, MNPaymentsHistoryDataRetriever> {

	long long _directionType;
	FBGraphQLService* _graphQLSerivce;
	FBMemPageInfo* _currentPageInfo;
	NSArray* _currentEdges;
	id _lookupHandle;
	MNPaymentsPeerToPeerPaymentRequestCoordinator* _requestCoordinator;
	id<MNPaymentsHistoryDataRetrieverDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * analyticsTabName; 
@property (nonatomic,copy,readonly) NSString * contentForEmptyData; 
@property (nonatomic,readonly) BOOL hasMoreData; 
@property (getter=isLoadingData,nonatomic,readonly) BOOL loadingData; 
@property (nonatomic,copy,readonly) NSArray * loadedEdges; 
@property (assign,nonatomic,__weak) id<MNPaymentsHistoryDataRetrieverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_applyServiceConfiguration:(id)arg1 ;
-(BOOL)isLoadingData;
-(void)_handleMergedEdges:(id)arg1 withInsertionIndexes:(id)arg2 andPageInfo:(id)arg3 ;
-(BOOL)loadMoreDataWithLimit:(unsigned long long)arg1 ;
-(NSString *)analyticsTabName;
-(NSString *)contentForEmptyData;
-(NSArray *)loadedEdges;
-(void)didUpdatePaymentRequest:(id)arg1 ;
-(id)initWithRequestDirectionType:(long long)arg1 graphQLService:(id)arg2 requestCoordinator:(id)arg3 ;
-(void)_handleDownloadedResponse:(id)arg1 existingEdges:(id)arg2 error:(id)arg3 ;
-(void)_updateRequest:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setDelegate:(id<MNPaymentsHistoryDataRetrieverDelegate>)arg1 ;
-(id<MNPaymentsHistoryDataRetrieverDelegate>)delegate;
-(NSString *)title;
-(void)reset;
-(void)_handleError:(id)arg1 ;
-(BOOL)hasMoreData;
@end
