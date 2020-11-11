void ThetaY_vs_Time_ProjX_4_noQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  9 17:41:23 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *ThetaY_vs_Time_4_px__22 = new TH1D("ThetaY_vs_Time_4_px__22","400<t<500 us",2700,0,402.1272);
   ThetaY_vs_Time_4_px__22->SetBinContent(2686,73);
   ThetaY_vs_Time_4_px__22->SetBinContent(2687,284);
   ThetaY_vs_Time_4_px__22->SetBinContent(2688,272);
   ThetaY_vs_Time_4_px__22->SetBinContent(2689,239);
   ThetaY_vs_Time_4_px__22->SetBinContent(2690,216);
   ThetaY_vs_Time_4_px__22->SetBinContent(2691,242);
   ThetaY_vs_Time_4_px__22->SetBinContent(2692,217);
   ThetaY_vs_Time_4_px__22->SetBinContent(2693,227);
   ThetaY_vs_Time_4_px__22->SetBinContent(2694,242);
   ThetaY_vs_Time_4_px__22->SetBinContent(2695,240);
   ThetaY_vs_Time_4_px__22->SetBinContent(2696,220);
   ThetaY_vs_Time_4_px__22->SetBinContent(2697,222);
   ThetaY_vs_Time_4_px__22->SetBinContent(2698,250);
   ThetaY_vs_Time_4_px__22->SetBinContent(2699,272);
   ThetaY_vs_Time_4_px__22->SetBinContent(2700,255);
   ThetaY_vs_Time_4_px__22->SetBinContent(2701,84350);
   ThetaY_vs_Time_4_px__22->SetBinError(2686,8.544004);
   ThetaY_vs_Time_4_px__22->SetBinError(2687,16.8523);
   ThetaY_vs_Time_4_px__22->SetBinError(2688,16.49242);
   ThetaY_vs_Time_4_px__22->SetBinError(2689,15.45962);
   ThetaY_vs_Time_4_px__22->SetBinError(2690,14.69694);
   ThetaY_vs_Time_4_px__22->SetBinError(2691,15.55635);
   ThetaY_vs_Time_4_px__22->SetBinError(2692,14.73092);
   ThetaY_vs_Time_4_px__22->SetBinError(2693,15.06652);
   ThetaY_vs_Time_4_px__22->SetBinError(2694,15.55635);
   ThetaY_vs_Time_4_px__22->SetBinError(2695,15.49193);
   ThetaY_vs_Time_4_px__22->SetBinError(2696,14.8324);
   ThetaY_vs_Time_4_px__22->SetBinError(2697,14.89966);
   ThetaY_vs_Time_4_px__22->SetBinError(2698,15.81139);
   ThetaY_vs_Time_4_px__22->SetBinError(2699,16.49242);
   ThetaY_vs_Time_4_px__22->SetBinError(2700,15.96872);
   ThetaY_vs_Time_4_px__22->SetBinError(2701,290.4307);
   ThetaY_vs_Time_4_px__22->SetEntries(3471);
   ThetaY_vs_Time_4_px__22->SetLineWidth(3);
   ThetaY_vs_Time_4_px__22->GetXaxis()->SetTitle("Track time [#mus]");
   ThetaY_vs_Time_4_px__22->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Time_4_px__22->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Time_4_px__22->GetXaxis()->SetLabelSize(0.04);
   ThetaY_vs_Time_4_px__22->GetXaxis()->SetTitleSize(0.04);
   ThetaY_vs_Time_4_px__22->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_vs_Time_4_px__22->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Time_4_px__22->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Time_4_px__22->GetYaxis()->SetNdivisions(4000510);
   ThetaY_vs_Time_4_px__22->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Time_4_px__22->GetYaxis()->SetTitleSize(0.04);
   ThetaY_vs_Time_4_px__22->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_vs_Time_4_px__22->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Time_4_px__22->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Time_4_px__22->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Time_4_px__22->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Time_4_px__22->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
