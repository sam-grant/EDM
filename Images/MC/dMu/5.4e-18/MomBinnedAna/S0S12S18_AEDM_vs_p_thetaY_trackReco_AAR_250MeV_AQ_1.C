void S0S12S18_AEDM_vs_p_thetaY_trackReco_AAR_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 22 14:11:21 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-336.297,-0.7850821,3335.911,1.019898);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1092[12] = {
   176.0138,
   432.6504,
   628.4065,
   872.9909,
   1121.658,
   1371.497,
   1620.22,
   1868.422,
   2116.783,
   2363.589,
   2614.113,
   2827.094};
   Double_t Graph0_fy1092[12] = {
   0.117408,
   0.09730243,
   0.1606676,
   0.1874821,
   0.1657738,
   0.1739286,
   0.1666168,
   0.1618255,
   0.1211682,
   0.09320852,
   0.09887536,
   0.05472567};
   Double_t Graph0_fex1092[12] = {
   0.4267611,
   0.04058831,
   0.03658792,
   0.03685438,
   0.03950822,
   0.0427505,
   0.04710958,
   0.0538375,
   0.06397269,
   0.080697,
   0.1053756,
   0.1280656};
   Double_t Graph0_fey1092[12] = {
   0.6016601,
   0.04067812,
   0.02026436,
   0.01663002,
   0.01500598,
   0.01383168,
   0.01306525,
   0.01281908,
   0.01299336,
   0.0136782,
   0.01396371,
   0.01671928};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1092,Graph0_fy1092,Graph0_fex1092,Graph0_fey1092);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01092 = new TH1F("Graph_Graph01092","S0S12S18_",100,0,3092.386);
   Graph_Graph01092->SetMinimum(-0.604584);
   Graph_Graph01092->SetMaximum(0.8394001);
   Graph_Graph01092->SetDirectory(0);
   Graph_Graph01092->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01092->SetLineColor(ci);
   Graph_Graph01092->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01092->GetXaxis()->SetRange(2,96);
   Graph_Graph01092->GetXaxis()->CenterTitle(true);
   Graph_Graph01092->GetXaxis()->SetLabelFont(42);
   Graph_Graph01092->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01092->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01092->GetXaxis()->SetTitleFont(42);
   Graph_Graph01092->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_Graph01092->GetYaxis()->CenterTitle(true);
   Graph_Graph01092->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01092->GetYaxis()->SetLabelFont(42);
   Graph_Graph01092->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01092->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01092->GetYaxis()->SetTitleFont(42);
   Graph_Graph01092->GetZaxis()->SetLabelFont(42);
   Graph_Graph01092->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01092->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01092);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.3920101,0.9362587,0.6079899,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
