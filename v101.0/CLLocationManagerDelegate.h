/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLLocationManagerDelegate <NSObject>
@optional
-(void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
-(void)locationManager:(id)arg1 didUpdateHeading:(id)arg2;
-(BOOL)locationManagerShouldDisplayHeadingCalibration:(id)arg1;
-(void)locationManager:(id)arg1 didDetermineState:(long long)arg2 forRegion:(id)arg3;
-(void)locationManager:(id)arg1 didRangeBeacons:(id)arg2 inRegion:(id)arg3;
-(void)locationManager:(id)arg1 rangingBeaconsDidFailForRegion:(id)arg2 withError:(id)arg3;
-(void)locationManager:(id)arg1 didEnterRegion:(id)arg2;
-(void)locationManager:(id)arg1 didExitRegion:(id)arg2;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2;
-(void)locationManager:(id)arg1 monitoringDidFailForRegion:(id)arg2 withError:(id)arg3;
-(void)locationManager:(id)arg1 didStartMonitoringForRegion:(id)arg2;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1;
-(void)locationManager:(id)arg1 didFinishDeferredUpdatesWithError:(id)arg2;
-(void)locationManager:(id)arg1 didVisit:(id)arg2;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;

@end

