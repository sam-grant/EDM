void S12_Y_RMS_vs_p_Run-1c_250MeV_1000_2500MeV_noRand_earlyTimes_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 12 11:33:02 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(785.0038,9.294042,2703.84,15.77914);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1044[11] = {
   456.0678,
   655.9514,
   884.5109,
   1127.821,
   1373.757,
   1620.369,
   1867.398,
   2116.35,
   2359.718,
   2607.84,
   2781.423};
   Double_t Graph0_fy1044[11] = {
   13.44092,
   12.71103,
   12.61261,
   12.55372,
   12.53525,
   12.53385,
   12.52864,
   12.4576,
   12.42803,
   12.57289,
   13.66873};
   Double_t Graph0_fex1044[11] = {
   0.1733822,
   0.1207164,
   0.07888935,
   0.07126412,
   0.06940773,
   0.07620121,
   0.09153184,
   0.1142679,
   0.1474891,
   0.2068434,
   0.3332545};
   Double_t Graph0_fey1044[11] = {
   0.05251002,
   0.01598498,
   0.009948795,
   0.008745022,
   0.008617494,
   0.009465989,
   0.01130474,
   0.01401524,
   0.01834383,
   0.02691237,
   0.1247363};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1044,Graph0_fy1044,Graph0_fex1044,Graph0_fey1044);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01044 = new TH1F("Graph_Graph01044","S12",100,223.3082,3014.342);
   Graph_Graph01044->SetMinimum(9.942552);
   Graph_Graph01044->SetMaximum(15.13063);
   Graph_Graph01044->SetDirectory(0);
   Graph_Graph01044->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01044->SetLineColor(ci);
   Graph_Graph01044->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01044->GetXaxis()->SetRange(28,82);
   Graph_Graph01044->GetXaxis()->CenterTitle(true);
   Graph_Graph01044->GetXaxis()->SetLabelFont(42);
   Graph_Graph01044->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01044->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01044->GetXaxis()->SetTitleFont(42);
   Graph_Graph01044->GetYaxis()->SetTitle("#sigma_{y} [mm] / 250 MeV");
   Graph_Graph01044->GetYaxis()->CenterTitle(true);
   Graph_Graph01044->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01044->GetYaxis()->SetLabelFont(42);
   Graph_Graph01044->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01044->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01044->GetYaxis()->SetTitleFont(42);
   Graph_Graph01044->GetZaxis()->SetLabelFont(42);
   Graph_Graph01044->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01044->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01044);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
