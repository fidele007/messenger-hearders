/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNBatchRequestMergeResultPropagating <NSObject>
@required
-(id)buildBatchResponsesFromSingleResponses:(id)arg1 requestQueryDefinitions:(id)arg2 requestId:(unsigned long long)arg3;
-(void)propagateMergedRequestWithRequestId:(unsigned long long)arg1 didUpdatePreliminaryResult:(id)arg2 longOperationDidBegin:(BOOL)arg3;
-(void)propagateMergedRequestWithRequestId:(unsigned long long)arg1 wasHandled:(id)arg2;
-(void)propagateMergedRequestWithRequestId:(unsigned long long)arg1 wasNotHandled:(id)arg2;

@end

