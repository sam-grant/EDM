void S12S18_AEDM_vs_p_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  1 16:15:32 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.8897,-0.0003062414,2728.021,0.09652249);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1040[22] = {
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
   Double_t Graph0_fy1040[22] = {
   0.7092285,
   0.3066697,
   0.1789712,
   0.06997374,
   0.07939792,
   0.04077977,
   0.05853161,
   0.01609495,
   0.03631657,
   0.0208204,
   0.02222118,
   0.01486284,
   0.0103972,
   0.0289368,
   0.0568562,
   0.01302262,
   0.05283651,
   0.04161952,
   0.01378688,
   -0.008857238,
   0.1693851,
   0.8264994};
   Double_t Graph0_fex1040[22] = {
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
   Double_t Graph0_fey1040[22] = {
   1.540791,
   0.133686,
   0.0656263,
   0.03956456,
   0.02747765,
   0.0226021,
   0.01990479,
   0.01795272,
   0.01688658,
   0.0160042,
   0.0159714,
   0.01547736,
   0.01603748,
   0.01621523,
   0.01696372,
   0.01716976,
   0.01795029,
   0.01932548,
   0.02041625,
   0.02198917,
   0.05428907,
   0.2452564};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1040,Graph0_fy1040,Graph0_fex1040,Graph0_fey1040);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01040 = new TH1F("Graph_Graph01040","S12S18",100,114.9502,3140.213);
   Graph_Graph01040->SetMinimum(0.009376632);
   Graph_Graph01040->SetMaximum(0.08683961);
   Graph_Graph01040->SetDirectory(0);
   Graph_Graph01040->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01040->SetLineColor(ci);
   Graph_Graph01040->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01040->GetXaxis()->SetRange(21,79);
   Graph_Graph01040->GetXaxis()->CenterTitle(true);
   Graph_Graph01040->GetXaxis()->SetLabelFont(42);
   Graph_Graph01040->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01040->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01040->GetXaxis()->SetTitleFont(42);
   Graph_Graph01040->GetYaxis()->SetTitle("A_{EDM} [mrad] / 125 MeV");
   Graph_Graph01040->GetYaxis()->CenterTitle(true);
   Graph_Graph01040->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01040->GetYaxis()->SetLabelFont(42);
   Graph_Graph01040->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01040->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01040->GetYaxis()->SetTitleFont(42);
   Graph_Graph01040->GetZaxis()->SetLabelFont(42);
   Graph_Graph01040->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01040->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01040);
   
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
