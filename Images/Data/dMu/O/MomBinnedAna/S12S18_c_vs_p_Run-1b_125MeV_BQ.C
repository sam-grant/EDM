void S12S18_c_vs_p_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:58:38 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.7656,-15.22447,2726.81,7.596832);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1033[22] = {
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
   Double_t Graph0_fy1033[22] = {
   -0.3900431,
   0.2056454,
   0.03707595,
   0.04971498,
   0.05201762,
   0.06485823,
   0.05958649,
   0.0697242,
   0.08243363,
   0.06045031,
   0.08859501,
   0.02423572,
   0.01546814,
   0.06996512,
   0.0424387,
   0.01976877,
   0.02006785,
   0.003709039,
   0.001986483,
   0.06720613,
   0.06825621,
   -3.813822};
   Double_t Graph0_fex1033[22] = {
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
   Double_t Graph0_fey1033[22] = {
   1.564631,
   0.1499461,
   0.07304581,
   0.04395703,
   0.03060406,
   0.02522441,
   0.02221058,
   0.02006082,
   0.01885551,
   0.01789972,
   0.01786914,
   0.01731826,
   0.01797526,
   0.01813963,
   0.01901517,
   0.01928001,
   0.02012747,
   0.02168757,
   0.02288107,
   0.02461613,
   0.05969012,
   7.607102};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1033,Graph0_fy1033,Graph0_fex1033,Graph0_fey1033);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01033 = new TH1F("Graph_Graph01033","S12S18",100,115.0123,3138.801);
   Graph_Graph01033->SetMinimum(-12.94234);
   Graph_Graph01033->SetMaximum(5.314701);
   Graph_Graph01033->SetDirectory(0);
   Graph_Graph01033->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01033->SetLineColor(ci);
   Graph_Graph01033->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01033->GetXaxis()->SetRange(21,79);
   Graph_Graph01033->GetXaxis()->CenterTitle(true);
   Graph_Graph01033->GetXaxis()->SetLabelFont(42);
   Graph_Graph01033->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01033->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01033->GetXaxis()->SetTitleFont(42);
   Graph_Graph01033->GetYaxis()->SetTitle("c [mrad] / 125 MeV");
   Graph_Graph01033->GetYaxis()->CenterTitle(true);
   Graph_Graph01033->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01033->GetYaxis()->SetLabelFont(42);
   Graph_Graph01033->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01033->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01033->GetYaxis()->SetTitleFont(42);
   Graph_Graph01033->GetZaxis()->SetLabelFont(42);
   Graph_Graph01033->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01033->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01033);
   
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
