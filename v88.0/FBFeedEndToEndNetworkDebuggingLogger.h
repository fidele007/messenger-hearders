/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBGraphQLConnectionControllerLoadListener.h>
#import <Messenger/FBGraphQLConnectionControllerNetworkListener.h>
#import <Messenger/FBGraphQLConnectionControllerDiagnosticsListener.h>

@class NSString;

@interface FBFeedEndToEndNetworkDebuggingLogger : NSObject <FBGraphQLConnectionControllerLoadListener, FBGraphQLConnectionControllerNetworkListener, FBGraphQLConnectionControllerDiagnosticsListener>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)loggerWithUserSession:(id)arg1 feedType:(long long)arg2 ;
-(void)graphQLConnectionController:(id)arg1 didBeginLoad:(id)arg2 ;
-(void)graphQLConnectionController:(id)arg1 didCompleteLoad:(id)arg2 ;
-(void)graphQLConnectionController:(id)arg1 didReceiveEdgesFromNetworkLoad:(id)arg2 ;
-(void)graphQLConnectionController:(id)arg1 didLoadEdgesFromNetworkLoad:(id)arg2 ;
-(void)graphQLConnectionController:(id)arg1 didLoadEmptyPage:(id)arg2 ;
-(void)graphQLConnectionController:(id)arg1 cannotInsertLoadedPage:(id)arg2 ;
-(void)graphQLConnectionController:(id)arg1 detectedMismatchedLoad:(id)arg2 ;
@end

