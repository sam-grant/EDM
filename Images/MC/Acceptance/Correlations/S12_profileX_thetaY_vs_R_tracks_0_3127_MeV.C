void S12_profileX_thetaY_vs_R_tracks_0_3127_MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May 31 19:04:52 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(-75,-2.527714,75,1.005882);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TProfile *S12_ThetaY_vs_R_pfx = new TProfile("S12_ThetaY_vs_R_pfx","",24,-60,60,"");
   S12_ThetaY_vs_R_pfx->SetBinEntries(4,0.3081395);
   S12_ThetaY_vs_R_pfx->SetBinEntries(5,0.6724806);
   S12_ThetaY_vs_R_pfx->SetBinEntries(6,1.117829);
   S12_ThetaY_vs_R_pfx->SetBinEntries(7,1.803876);
   S12_ThetaY_vs_R_pfx->SetBinEntries(8,2.552326);
   S12_ThetaY_vs_R_pfx->SetBinEntries(9,3.379457);
   S12_ThetaY_vs_R_pfx->SetBinEntries(10,4.153101);
   S12_ThetaY_vs_R_pfx->SetBinEntries(11,5.039922);
   S12_ThetaY_vs_R_pfx->SetBinEntries(12,5.612016);
   S12_ThetaY_vs_R_pfx->SetBinEntries(13,6.189535);
   S12_ThetaY_vs_R_pfx->SetBinEntries(14,6.704651);
   S12_ThetaY_vs_R_pfx->SetBinEntries(15,7.708915);
   S12_ThetaY_vs_R_pfx->SetBinEntries(16,7.984496);
   S12_ThetaY_vs_R_pfx->SetBinEntries(17,6.100388);
   S12_ThetaY_vs_R_pfx->SetBinEntries(18,3.600388);
   S12_ThetaY_vs_R_pfx->SetBinEntries(19,2.005039);
   S12_ThetaY_vs_R_pfx->SetBinEntries(20,1.043411);
   S12_ThetaY_vs_R_pfx->SetBinEntries(21,0.4116279);
   S12_ThetaY_vs_R_pfx->SetBinContent(4,-0.1405039);
   S12_ThetaY_vs_R_pfx->SetBinContent(5,-0.7412791);
   S12_ThetaY_vs_R_pfx->SetBinContent(6,-1.889535);
   S12_ThetaY_vs_R_pfx->SetBinContent(7,-0.8837209);
   S12_ThetaY_vs_R_pfx->SetBinContent(8,-1.698643);
   S12_ThetaY_vs_R_pfx->SetBinContent(9,-1.33624);
   S12_ThetaY_vs_R_pfx->SetBinContent(10,-0.750969);
   S12_ThetaY_vs_R_pfx->SetBinContent(11,-0.7102713);
   S12_ThetaY_vs_R_pfx->SetBinContent(12,-1.181202);
   S12_ThetaY_vs_R_pfx->SetBinContent(13,-0.4370155);
   S12_ThetaY_vs_R_pfx->SetBinContent(14,-2.870155);
   S12_ThetaY_vs_R_pfx->SetBinContent(15,-3.63469);
   S12_ThetaY_vs_R_pfx->SetBinContent(16,-2.52907);
   S12_ThetaY_vs_R_pfx->SetBinContent(17,-1.83624);
   S12_ThetaY_vs_R_pfx->SetBinContent(18,-1.014535);
   S12_ThetaY_vs_R_pfx->SetBinContent(19,-1.208333);
   S12_ThetaY_vs_R_pfx->SetBinContent(20,0.2170543);
   S12_ThetaY_vs_R_pfx->SetBinContent(21,-0.3023256);
   S12_ThetaY_vs_R_pfx->SetBinError(4,10.62611);
   S12_ThetaY_vs_R_pfx->SetBinError(5,15.60714);
   S12_ThetaY_vs_R_pfx->SetBinError(6,20.28026);
   S12_ThetaY_vs_R_pfx->SetBinError(7,24.8779);
   S12_ThetaY_vs_R_pfx->SetBinError(8,29.65438);
   S12_ThetaY_vs_R_pfx->SetBinError(9,34.06187);
   S12_ThetaY_vs_R_pfx->SetBinError(10,37.33682);
   S12_ThetaY_vs_R_pfx->SetBinError(11,40.13045);
   S12_ThetaY_vs_R_pfx->SetBinError(12,42.09413);
   S12_ThetaY_vs_R_pfx->SetBinError(13,43.80921);
   S12_ThetaY_vs_R_pfx->SetBinError(14,44.57666);
   S12_ThetaY_vs_R_pfx->SetBinError(15,47.57045);
   S12_ThetaY_vs_R_pfx->SetBinError(16,47.36261);
   S12_ThetaY_vs_R_pfx->SetBinError(17,41.13797);
   S12_ThetaY_vs_R_pfx->SetBinError(18,31.06854);
   S12_ThetaY_vs_R_pfx->SetBinError(19,22.85937);
   S12_ThetaY_vs_R_pfx->SetBinError(20,16.42489);
   S12_ThetaY_vs_R_pfx->SetBinError(21,9.834631);
   S12_ThetaY_vs_R_pfx->SetEntries(171280);
   S12_ThetaY_vs_R_pfx->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   S12_ThetaY_vs_R_pfx->SetLineColor(ci);
   S12_ThetaY_vs_R_pfx->GetXaxis()->SetTitle("Decay radial position [mm]");
   S12_ThetaY_vs_R_pfx->GetXaxis()->CenterTitle(true);
   S12_ThetaY_vs_R_pfx->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_vs_R_pfx->GetXaxis()->SetTitleSize(0.04);
   S12_ThetaY_vs_R_pfx->GetXaxis()->SetTitleOffset(1.1);
   S12_ThetaY_vs_R_pfx->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_vs_R_pfx->GetYaxis()->CenterTitle(true);
   S12_ThetaY_vs_R_pfx->GetYaxis()->SetNdivisions(4000510);
   S12_ThetaY_vs_R_pfx->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_vs_R_pfx->GetYaxis()->SetTitleSize(0.04);
   S12_ThetaY_vs_R_pfx->GetYaxis()->SetTitleOffset(1.1);
   S12_ThetaY_vs_R_pfx->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_vs_R_pfx->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_vs_R_pfx->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_vs_R_pfx->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_vs_R_pfx->Draw("E");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
