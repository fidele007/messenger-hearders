/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSearchBootstrapConfig <NSObject>
@required
+(id)lastStoreFullRefreshDateKeyString;
+(double)refreshIntervalWiFiForSession:(id)arg1;
+(double)refreshIntervalNonWiFiForSession:(id)arg1;
+(id)downloadRequestWithSession:(id)arg1;
+(id)resultsFromRequest:(id)arg1 response:(id)arg2 parseError:(id*)arg3;
+(id)serializeBootstrapData:(id)arg1;
+(id)suggestionGeneratorWithBootstrapFileManager:(id)arg1 session:(id)arg2;
+(unsigned long long)maxResultCount;
+(id)fileName;

@end

