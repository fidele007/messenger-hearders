/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:01 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBGraphQLMutationBase.h>

@class FBGraphQLQuery;

@interface FBPageRatingDeleteNoshimMutationCall : FBGraphQLMutationBase {

	FBGraphQLQuery* _mutation;

}
-(id)initWithInput:(id)arg1 optimisticPayloadFactory:(id)arg2 mutation:(id)arg3 successHandler:(/*^block*/id)arg4 errorHandler:(/*^block*/id)arg5 ;
-(id)mutationName;
-(id)mutationRequest:(id)arg1 ;
-(id)payloadFromResponse:(id)arg1 ;
@end

