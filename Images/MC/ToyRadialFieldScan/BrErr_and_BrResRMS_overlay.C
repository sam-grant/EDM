void BrErr_and_BrResRMS_overlay()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  8 12:25:50 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1669544,0.149769,1.502589e+07,1.911312);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Fits_fx1109[13] = {
   941716,
   1907064,
   2868345,
   3792445,
   4758726,
   5723857,
   6686373,
   7651067,
   8616015,
   9581050,
   1.054512e+07,
   1.151148e+07,
   1.247554e+07};
   Double_t Fits_fy1109[13] = {
   1.617721,
   1.136122,
   0.9234602,
   0.8041546,
   0.7179949,
   0.6548887,
   0.6052799,
   0.5661832,
   0.5328522,
   0.5057185,
   0.4818175,
   0.4612885,
   0.4433595};
   Double_t Fits_fex1109[13] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Fits_fey1109[13] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(13,Fits_fx1109,Fits_fy1109,Fits_fex1109,Fits_fey1109);
   gre->SetName("Fits");
   gre->SetTitle(";CTAGs / setting;#delta#LTB_{r}^{Bkg}#GT [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Fits1109 = new TH1F("Graph_Fits1109","",100,0,1.362893e+07);
   Graph_Fits1109->SetMinimum(0.3259233);
   Graph_Fits1109->SetMaximum(1.735157);
   Graph_Fits1109->SetDirectory(0);
   Graph_Fits1109->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Fits1109->SetLineColor(ci);
   Graph_Fits1109->GetXaxis()->SetTitle("CTAGs / setting");
   Graph_Fits1109->GetXaxis()->SetRange(1,98);
   Graph_Fits1109->GetXaxis()->CenterTitle(true);
   Graph_Fits1109->GetXaxis()->SetLabelFont(42);
   Graph_Fits1109->GetXaxis()->SetTitleSize(0.04);
   Graph_Fits1109->GetXaxis()->SetTitleOffset(1.1);
   Graph_Fits1109->GetXaxis()->SetTitleFont(42);
   Graph_Fits1109->GetYaxis()->SetTitle("#delta#LTB_{r}^{Bkg}#GT [ppm]");
   Graph_Fits1109->GetYaxis()->CenterTitle(true);
   Graph_Fits1109->GetYaxis()->SetNdivisions(4000510);
   Graph_Fits1109->GetYaxis()->SetLabelFont(42);
   Graph_Fits1109->GetYaxis()->SetTitleSize(0.04);
   Graph_Fits1109->GetYaxis()->SetTitleOffset(1.1);
   Graph_Fits1109->GetYaxis()->SetTitleFont(42);
   Graph_Fits1109->GetZaxis()->SetLabelFont(42);
   Graph_Fits1109->GetZaxis()->SetTitleOffset(1);
   Graph_Fits1109->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Fits1109);
   
   gre->Draw("ap");
   
   Double_t Truth_fx1110[13] = {
   941716,
   1907064,
   2868345,
   3792445,
   4758726,
   5723857,
   6686373,
   7651067,
   8616015,
   9581050,
   1.054512e+07,
   1.151148e+07,
   1.247554e+07};
   Double_t Truth_fy1110[13] = {
   1.581739,
   1.128184,
   0.8982753,
   0.8234299,
   0.7246563,
   0.6543121,
   0.6010765,
   0.5599168,
   0.5529705,
   0.5000632,
   0.4730629,
   0.4640878,
   0.4520926};
   Double_t Truth_fex1110[13] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Truth_fey1110[13] = {
   0.03536877,
   0.02522695,
   0.02008605,
   0.01841245,
   0.01620381,
   0.01463086,
   0.01344048,
   0.01252012,
   0.0123648,
   0.01118175,
   0.01057801,
   0.01037732,
   0.0101091};
   gre = new TGraphErrors(13,Truth_fx1110,Truth_fy1110,Truth_fex1110,Truth_fey1110);
   gre->SetName("Truth");
   gre->SetTitle(";CTAGs / setting;RMS of meas #minus true #LTB_{r}^{Bkg}#GT [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Truth1110 = new TH1F("Graph_Truth1110","",100,0,1.362893e+07);
   Graph_Truth1110->SetMinimum(0.3244711);
   Graph_Truth1110->SetMaximum(1.73462);
   Graph_Truth1110->SetDirectory(0);
   Graph_Truth1110->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Truth1110->SetLineColor(ci);
   Graph_Truth1110->GetXaxis()->SetTitle("CTAGs / setting");
   Graph_Truth1110->GetXaxis()->SetRange(1,98);
   Graph_Truth1110->GetXaxis()->CenterTitle(true);
   Graph_Truth1110->GetXaxis()->SetLabelFont(42);
   Graph_Truth1110->GetXaxis()->SetTitleSize(0.04);
   Graph_Truth1110->GetXaxis()->SetTitleOffset(1.1);
   Graph_Truth1110->GetXaxis()->SetTitleFont(42);
   Graph_Truth1110->GetYaxis()->SetTitle("RMS of meas #minus true #LTB_{r}^{Bkg}#GT [ppm]");
   Graph_Truth1110->GetYaxis()->CenterTitle(true);
   Graph_Truth1110->GetYaxis()->SetNdivisions(4000510);
   Graph_Truth1110->GetYaxis()->SetLabelFont(42);
   Graph_Truth1110->GetYaxis()->SetTitleSize(0.04);
   Graph_Truth1110->GetYaxis()->SetTitleOffset(1.1);
   Graph_Truth1110->GetYaxis()->SetTitleFont(42);
   Graph_Truth1110->GetZaxis()->SetLabelFont(42);
   Graph_Truth1110->GetZaxis()->SetTitleOffset(1);
   Graph_Truth1110->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Truth1110);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.7,0.65,0.89,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Fits","Fits","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Truth","Truth","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TGaxis *gaxis = new TGaxis(0,1.735157,1.335635e+07,1.735157,0,344.5,510,"-");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.04);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(1.1);
   gaxis->SetTitleSize(0.04);
   gaxis->SetTitleColor(632);
   gaxis->SetTitleFont(42);
   gaxis->SetTitle("Sub-runs / setting");

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLabelColor(ci);

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLineColor(ci);
   gaxis->SetLabelFont(42);
   gaxis->Draw();
   TLine *line = new TLine(0,1,1.335635e+07,1);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(3);
   line->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
