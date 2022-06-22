void S12_profileX_thetaY_vs_Y_tracks_0_3127_MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun  2 09:37:16 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(-75,-25.44845,75,26.18358);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TProfile *S12_ThetaY_vs_Y_pfx = new TProfile("S12_ThetaY_vs_Y_pfx","",24,-60,60,"");
   S12_ThetaY_vs_Y_pfx->SetBinEntries(4,0.1554184);
   S12_ThetaY_vs_Y_pfx->SetBinEntries(5,0.4539144);
   S12_ThetaY_vs_Y_pfx->SetBinEntries(6,0.9005013);
   S12_ThetaY_vs_Y_pfx->SetBinEntries(7,1.716545);
   S12_ThetaY_vs_Y_pfx->SetBinEntries(8,2.895874);
   S12_ThetaY_vs_Y_pfx->SetBinEntries(9,4.467412);
   S12_ThetaY_vs_Y_pfx->SetBinEntries(10,6.312765);
   S12_ThetaY_vs_Y_pfx->SetBinEntries(11,7.768608);
   S12_ThetaY_vs_Y_pfx->SetBinEntries(12,8.650212);
   S12_ThetaY_vs_Y_pfx->SetBinEntries(13,8.596606);
   S12_ThetaY_vs_Y_pfx->SetBinEntries(14,7.570767);
   S12_ThetaY_vs_Y_pfx->SetBinEntries(15,6.124952);
   S12_ThetaY_vs_Y_pfx->SetBinEntries(16,4.446587);
   S12_ThetaY_vs_Y_pfx->SetBinEntries(17,2.838797);
   S12_ThetaY_vs_Y_pfx->SetBinEntries(18,1.648669);
   S12_ThetaY_vs_Y_pfx->SetBinEntries(19,0.9178558);
   S12_ThetaY_vs_Y_pfx->SetBinEntries(20,0.4489009);
   S12_ThetaY_vs_Y_pfx->SetBinEntries(21,0.1403779);
   S12_ThetaY_vs_Y_pfx->SetBinContent(4,2.854801);
   S12_ThetaY_vs_Y_pfx->SetBinContent(5,7.422869);
   S12_ThetaY_vs_Y_pfx->SetBinContent(6,12.73911);
   S12_ThetaY_vs_Y_pfx->SetBinContent(7,22.38238);
   S12_ThetaY_vs_Y_pfx->SetBinContent(8,31.29676);
   S12_ThetaY_vs_Y_pfx->SetBinContent(9,38.53837);
   S12_ThetaY_vs_Y_pfx->SetBinContent(10,40.06845);
   S12_ThetaY_vs_Y_pfx->SetBinContent(11,27.18666);
   S12_ThetaY_vs_Y_pfx->SetBinContent(12,8.482453);
   S12_ThetaY_vs_Y_pfx->SetBinContent(13,-15.62379);
   S12_ThetaY_vs_Y_pfx->SetBinContent(14,-33.04956);
   S12_ThetaY_vs_Y_pfx->SetBinContent(15,-43.5673);
   S12_ThetaY_vs_Y_pfx->SetBinContent(16,-41.74123);
   S12_ThetaY_vs_Y_pfx->SetBinContent(17,-33.17875);
   S12_ThetaY_vs_Y_pfx->SetBinContent(18,-22.39202);
   S12_ThetaY_vs_Y_pfx->SetBinContent(19,-14.0243);
   S12_ThetaY_vs_Y_pfx->SetBinContent(20,-7.734285);
   S12_ThetaY_vs_Y_pfx->SetBinContent(21,-2.493251);
   S12_ThetaY_vs_Y_pfx->SetBinError(4,9.045643);
   S12_ThetaY_vs_Y_pfx->SetBinError(5,14.50835);
   S12_ThetaY_vs_Y_pfx->SetBinError(6,19.22469);
   S12_ThetaY_vs_Y_pfx->SetBinError(7,26.11212);
   S12_ThetaY_vs_Y_pfx->SetBinError(8,32.17157);
   S12_ThetaY_vs_Y_pfx->SetBinError(9,37.92283);
   S12_ThetaY_vs_Y_pfx->SetBinError(10,43.25396);
   S12_ThetaY_vs_Y_pfx->SetBinError(11,45.47919);
   S12_ThetaY_vs_Y_pfx->SetBinError(12,46.67786);
   S12_ThetaY_vs_Y_pfx->SetBinError(13,47.50817);
   S12_ThetaY_vs_Y_pfx->SetBinError(14,45.50799);
   S12_ThetaY_vs_Y_pfx->SetBinError(15,43.30277);
   S12_ThetaY_vs_Y_pfx->SetBinError(16,38.39186);
   S12_ThetaY_vs_Y_pfx->SetBinError(17,32.65951);
   S12_ThetaY_vs_Y_pfx->SetBinError(18,26.26637);
   S12_ThetaY_vs_Y_pfx->SetBinError(19,20.17065);
   S12_ThetaY_vs_Y_pfx->SetBinError(20,14.80982);
   S12_ThetaY_vs_Y_pfx->SetBinError(21,8.120169);
   S12_ThetaY_vs_Y_pfx->SetEntries(171280);
   S12_ThetaY_vs_Y_pfx->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   S12_ThetaY_vs_Y_pfx->SetLineColor(ci);
   S12_ThetaY_vs_Y_pfx->GetXaxis()->SetTitle("Decay vertical position [mm]");
   S12_ThetaY_vs_Y_pfx->GetXaxis()->CenterTitle(true);
   S12_ThetaY_vs_Y_pfx->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_vs_Y_pfx->GetXaxis()->SetTitleSize(0.04);
   S12_ThetaY_vs_Y_pfx->GetXaxis()->SetTitleOffset(1.1);
   S12_ThetaY_vs_Y_pfx->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_vs_Y_pfx->GetYaxis()->CenterTitle(true);
   S12_ThetaY_vs_Y_pfx->GetYaxis()->SetNdivisions(4000510);
   S12_ThetaY_vs_Y_pfx->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_vs_Y_pfx->GetYaxis()->SetTitleSize(0.04);
   S12_ThetaY_vs_Y_pfx->GetYaxis()->SetTitleOffset(1.1);
   S12_ThetaY_vs_Y_pfx->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_vs_Y_pfx->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_vs_Y_pfx->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_vs_Y_pfx->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_vs_Y_pfx->Draw("E");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
