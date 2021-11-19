void S18_AEDMOverMaxDiff_vs_p_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:58:38 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.8475,-22.30687,2727.136,4.4708);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1032[22] = {
   367.3383,
   456.566,
   569.9738,
   694.4401,
   815.6403,
   938.5725,
   1062.713,
   1187.891,
   1312.687,
   1435.591,
   1562.019,
   1684.943,
   1810.534,
   1934.963,
   2060.319,
   2184.85,
   2308.939,
   2433.329,
   2560.086,
   2677.913,
   2780.761,
   2885.117};
   Double_t Graph0_fy1032[22] = {
   -0.008800809,
   -0.0001494563,
   -0.000114143,
   0.0001284492,
   0.0001936161,
   2.128004e-05,
   -4.075707e-05,
   9.211037e-05,
   -0.0001318572,
   0.0003500139,
   -0.0001398852,
   -7.746389e-05,
   -8.657584e-05,
   -0.0002686041,
   -0.0001689455,
   -0.0001797332,
   -5.849316e-05,
   -2.512843e-05,
   -6.498169e-05,
   -0.000111764,
   0.003837467,
   -17.84392};
   Double_t Graph0_fex1032[22] = {
   0.2758887,
   0.1401129,
   0.09337128,
   0.06458879,
   0.05290353,
   0.04783934,
   0.04561247,
   0.04414911,
   0.04516617,
   0.04561095,
   0.04898217,
   0.05212218,
   0.05891221,
   0.06491275,
   0.0746884,
   0.08261501,
   0.09596225,
   0.1164331,
   0.1370073,
   0.1562653,
   0.3178764,
   2.044752};
   Double_t Graph0_fey1032[22] = {
   -0.0162694,
   -0.0008824512,
   -0.0004324412,
   0.0003422918,
   0.0002863241,
   0.0002191077,
   -0.000263479,
   0.0002142517,
   -0.0002164899,
   0.0002384996,
   -0.0002343038,
   -0.0003481299,
   -0.0004237135,
   -0.0004769814,
   -0.0004235488,
   -0.0004304267,
   -0.0006161856,
   -0.000972297,
   -0.001067637,
   -0.0008660759,
   0.004018063,
   -3386.496};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1032,Graph0_fy1032,Graph0_fex1032,Graph0_fey1032);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01032 = new TH1F("Graph_Graph01032","S18",100,115.0524,3139.172);
   Graph_Graph01032->SetMinimum(-19.6291);
   Graph_Graph01032->SetMaximum(1.793033);
   Graph_Graph01032->SetDirectory(0);
   Graph_Graph01032->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01032->SetLineColor(ci);
   Graph_Graph01032->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01032->GetXaxis()->SetRange(21,79);
   Graph_Graph01032->GetXaxis()->CenterTitle(true);
   Graph_Graph01032->GetXaxis()->SetLabelFont(42);
   Graph_Graph01032->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01032->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01032->GetXaxis()->SetTitleFont(42);
   Graph_Graph01032->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 125 MeV");
   Graph_Graph01032->GetYaxis()->CenterTitle(true);
   Graph_Graph01032->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01032->GetYaxis()->SetLabelFont(42);
   Graph_Graph01032->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01032->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01032->GetYaxis()->SetTitleFont(42);
   Graph_Graph01032->GetZaxis()->SetLabelFont(42);
   Graph_Graph01032->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01032->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01032);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
