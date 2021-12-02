void S18_Y_RMS_vs_p_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov 30 19:14:01 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(529.9807,9.649575,2721.688,26.67097);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1027[22] = {
   366.5662,
   457.0917,
   570.2421,
   694.5221,
   815.6213,
   938.4662,
   1062.727,
   1188.134,
   1312.601,
   1435.769,
   1561.946,
   1685.013,
   1810.381,
   1934.997,
   2060.333,
   2184.767,
   2309.184,
   2433.47,
   2559.803,
   2678.098,
   2781.058,
   2884.141};
   Double_t Graph0_fy1027[22] = {
   13.68438,
   13.63224,
   13.01458,
   12.74269,
   12.71269,
   12.69628,
   12.67948,
   12.67208,
   12.69103,
   12.69516,
   12.70423,
   12.68745,
   12.68238,
   12.65057,
   12.57683,
   12.52779,
   12.51414,
   12.54713,
   12.56685,
   12.73283,
   13.35559,
   20.58008};
   Double_t Graph0_fex1027[22] = {
   0.3336677,
   0.1656362,
   0.1099873,
   0.07619882,
   0.06207029,
   0.05636812,
   0.05341752,
   0.05190892,
   0.05306636,
   0.05358227,
   0.05753787,
   0.06116378,
   0.06928167,
   0.07588051,
   0.08755577,
   0.09662597,
   0.1121965,
   0.1360054,
   0.159986,
   0.1834622,
   0.3828877,
   1.295421};
   Double_t Graph0_fey1027[22] = {
   0.5106964,
   0.0524783,
   0.02852855,
   0.01944215,
   0.01558028,
   0.01400068,
   0.01334048,
   0.01295628,
   0.01313419,
   0.01338874,
   0.01433401,
   0.01527507,
   0.01720578,
   0.0189326,
   0.02152367,
   0.02383054,
   0.02766503,
   0.03346318,
   0.0394864,
   0.04886627,
   0.1425494,
   3.253996};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1027,Graph0_fy1027,Graph0_fex1027,Graph0_fey1027);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01027 = new TH1F("Graph_Graph01027","S18",100,114.3121,3137.356);
   Graph_Graph01027->SetMinimum(11.35171);
   Graph_Graph01027->SetMaximum(24.96883);
   Graph_Graph01027->SetDirectory(0);
   Graph_Graph01027->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01027->SetLineColor(ci);
   Graph_Graph01027->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01027->GetXaxis()->SetRange(22,79);
   Graph_Graph01027->GetXaxis()->CenterTitle(true);
   Graph_Graph01027->GetXaxis()->SetLabelFont(42);
   Graph_Graph01027->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01027->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01027->GetXaxis()->SetTitleFont(42);
   Graph_Graph01027->GetYaxis()->SetTitle("#sigma_{y} [mm] / 125 MeV");
   Graph_Graph01027->GetYaxis()->CenterTitle(true);
   Graph_Graph01027->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01027->GetYaxis()->SetLabelFont(42);
   Graph_Graph01027->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01027->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01027->GetYaxis()->SetTitleFont(42);
   Graph_Graph01027->GetZaxis()->SetLabelFont(42);
   Graph_Graph01027->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01027->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01027);
   
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
