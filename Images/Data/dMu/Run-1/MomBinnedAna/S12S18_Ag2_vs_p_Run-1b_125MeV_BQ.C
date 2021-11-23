void S12S18_Ag2_vs_p_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov 23 11:24:04 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.8897,-2.628083,2728.021,1.860949);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1039[22] = {
   367.2385,
   456.7075,
   570.1081,
   694.7359,
   815.8178,
   938.6514,
   1062.74,
   1188.098,
   1312.71,
   1435.778,
   1562.012,
   1685.106,
   1810.598,
   1935.076,
   2060.312,
   2184.99,
   2309.085,
   2433.14,
   2559.752,
   2678.662,
   2780.904,
   2886.857};
   Double_t Graph0_fy1039[22] = {
   -0.3835672,
   -0.1776679,
   0.005344832,
   -0.02734646,
   -0.009787076,
   0.02546564,
   -0.0111565,
   -0.02433755,
   0.004684662,
   0.001415724,
   0.01014666,
   0.01777365,
   -0.02584714,
   -0.0230396,
   -0.01852344,
   -0.003808637,
   -0.001327634,
   -0.03521032,
   0.01450484,
   -0.007238146,
   0.04571622,
   -0.3957921};
   Double_t Graph0_fex1039[22] = {
   0.1830309,
   0.09171714,
   0.06159356,
   0.04208012,
   0.03402449,
   0.03067219,
   0.02917568,
   0.02818454,
   0.02862272,
   0.02882038,
   0.03089893,
   0.03263451,
   0.03667816,
   0.04023789,
   0.04606633,
   0.05078197,
   0.05867116,
   0.07077055,
   0.0840277,
   0.09624685,
   0.1948998,
   1.250899};
   Double_t Graph0_fey1039[22] = {
   1.496344,
   0.1347024,
   0.06571503,
   0.03952752,
   0.02740501,
   0.02251189,
   0.01983811,
   0.01790064,
   0.01679017,
   0.01595575,
   0.01591198,
   0.01545934,
   0.01605621,
   0.01625921,
   0.01710903,
   0.01751219,
   0.01843559,
   0.02017174,
   0.02174147,
   0.02403346,
   0.06130998,
   0.6128979};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1039,Graph0_fy1039,Graph0_fex1039,Graph0_fey1039);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01039 = new TH1F("Graph_Graph01039","S12S18",100,114.9502,3140.213);
   Graph_Graph01039->SetMinimum(-2.17918);
   Graph_Graph01039->SetMaximum(1.412046);
   Graph_Graph01039->SetDirectory(0);
   Graph_Graph01039->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01039->SetLineColor(ci);
   Graph_Graph01039->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01039->GetXaxis()->SetRange(21,79);
   Graph_Graph01039->GetXaxis()->CenterTitle(true);
   Graph_Graph01039->GetXaxis()->SetLabelFont(42);
   Graph_Graph01039->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01039->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01039->GetXaxis()->SetTitleFont(42);
   Graph_Graph01039->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 125 MeV");
   Graph_Graph01039->GetYaxis()->CenterTitle(true);
   Graph_Graph01039->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01039->GetYaxis()->SetLabelFont(42);
   Graph_Graph01039->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01039->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01039->GetYaxis()->SetTitleFont(42);
   Graph_Graph01039->GetZaxis()->SetLabelFont(42);
   Graph_Graph01039->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01039->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01039);
   
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
