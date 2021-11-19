void S12S18_Ag2_vs_p_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:58:38 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.7656,-14.04932,2726.81,7.888577);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1035[22] = {
   367.1918,
   456.6147,
   570.0834,
   694.7135,
   815.7883,
   938.6512,
   1062.729,
   1188.095,
   1312.704,
   1435.772,
   1562,
   1685.097,
   1810.599,
   1935.109,
   2060.314,
   2185.016,
   2309.07,
   2433.164,
   2559.726,
   2678.651,
   2780.754,
   2885.425};
   Double_t Graph0_fy1035[22] = {
   2.252144,
   0.001930587,
   -0.1181391,
   0.01426724,
   0.005559914,
   0.03780283,
   0.004536717,
   -0.009994451,
   0.01933039,
   0.0283482,
   0.006500795,
   -0.02845442,
   -0.01434698,
   0.01081939,
   -0.008692868,
   -0.008172424,
   -0.01468175,
   -0.00998167,
   -0.06466018,
   0.0002731209,
   -0.03748918,
   -4.03571};
   Double_t Graph0_fex1035[22] = {
   0.1970936,
   0.1002381,
   0.06733037,
   0.04602636,
   0.03727099,
   0.03359952,
   0.03198166,
   0.03090757,
   0.03144366,
   0.03165276,
   0.03395879,
   0.03588086,
   0.0403638,
   0.04430086,
   0.05071275,
   0.05596869,
   0.06482442,
   0.07808434,
   0.09274195,
   0.1063002,
   0.2145415,
   1.394003};
   Double_t Graph0_fey1035[22] = {
   1.980116,
   0.1900856,
   0.09296968,
   0.05583165,
   0.03890188,
   0.03207583,
   0.02821855,
   0.02550107,
   0.02398735,
   0.0227464,
   0.0227025,
   0.02199884,
   0.02284815,
   0.0230902,
   0.0241903,
   0.02449871,
   0.02562742,
   0.02759444,
   0.02894276,
   0.03125111,
   0.07549923,
   6.357295};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1035,Graph0_fy1035,Graph0_fex1035,Graph0_fey1035);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01035 = new TH1F("Graph_Graph01035","S12S18",100,115.0123,3138.801);
   Graph_Graph01035->SetMinimum(-11.85553);
   Graph_Graph01035->SetMaximum(5.694787);
   Graph_Graph01035->SetDirectory(0);
   Graph_Graph01035->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01035->SetLineColor(ci);
   Graph_Graph01035->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01035->GetXaxis()->SetRange(21,79);
   Graph_Graph01035->GetXaxis()->CenterTitle(true);
   Graph_Graph01035->GetXaxis()->SetLabelFont(42);
   Graph_Graph01035->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01035->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01035->GetXaxis()->SetTitleFont(42);
   Graph_Graph01035->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 125 MeV");
   Graph_Graph01035->GetYaxis()->CenterTitle(true);
   Graph_Graph01035->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01035->GetYaxis()->SetLabelFont(42);
   Graph_Graph01035->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01035->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01035->GetYaxis()->SetTitleFont(42);
   Graph_Graph01035->GetZaxis()->SetLabelFont(42);
   Graph_Graph01035->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01035->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01035);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
