/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:04 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSArray, FBLocationManagerConnectedWifiScan;

@interface FBLocationManagerWifiInfo : FBGraphQLInput {

	NSArray* _scanResults;
	FBLocationManagerConnectedWifiScan* _connected;

}

@property (nonatomic,copy) NSArray * scanResults;                                       //@synthesize scanResults=_scanResults - In the implementation block
@property (nonatomic,copy) FBLocationManagerConnectedWifiScan * connected;              //@synthesize connected=_connected - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setConnected:(FBLocationManagerConnectedWifiScan *)arg1 ;
-(FBLocationManagerConnectedWifiScan *)connected;
-(NSArray *)scanResults;
-(void)setScanResults:(NSArray *)arg1 ;
@end

