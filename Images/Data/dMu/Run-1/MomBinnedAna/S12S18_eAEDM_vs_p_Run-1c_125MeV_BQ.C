void S12S18_eAEDM_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 03:48:47 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(462.6813,-0.02759981,3034.593,0.3500525);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1179[22] = {
   367.0185,
   457.1218,
   570.1528,
   694.8141,
   815.8616,
   938.5523,
   1062.831,
   1188.305,
   1312.636,
   1435.862,
   1561.962,
   1685.209,
   1810.569,
   1935.052,
   2060.277,
   2184.947,
   2309.054,
   2433.112,
   2559.619,
   2678.432,
   2781.123,
   2887.327};
   Double_t Graph0_fy1179[22] = {
   1.186287,
   0.1100188,
   0.05341477,
   0.03238836,
   0.02243656,
   0.0184307,
   0.01619289,
   0.01463858,
   0.01379308,
   0.01306955,
   0.01309224,
   0.01268976,
   0.01316446,
   0.0132747,
   0.01388134,
   0.01414466,
   0.01478178,
   0.01592596,
   0.01688565,
   0.01842247,
   0.04606041,
   0.4324035};
   Double_t Graph0_fex1179[22] = {
   0.1534774,
   0.07541461,
   0.05017119,
   0.0346395,
   0.02780283,
   0.02511147,
   0.02377681,
   0.0230726,
   0.02344017,
   0.02357682,
   0.02539003,
   0.02675328,
   0.03020717,
   0.03307373,
   0.03793287,
   0.04196719,
   0.04847618,
   0.05840789,
   0.06974521,
   0.08044594,
   0.1649024,
   1.019721};
   Double_t Graph0_fey1179[22] = {
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
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1179,Graph0_fy1179,Graph0_fex1179,Graph0_fey1179);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01179 = new TH1F("Graph_Graph01179","S12S18",100,114.7168,3140.495);
   Graph_Graph01179->SetMinimum(0.01016542);
   Graph_Graph01179->SetMaximum(0.3122873);
   Graph_Graph01179->SetDirectory(0);
   Graph_Graph01179->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01179->SetLineColor(ci);
   Graph_Graph01179->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01179->GetXaxis()->SetRange(21,88);
   Graph_Graph01179->GetXaxis()->CenterTitle(true);
   Graph_Graph01179->GetXaxis()->SetLabelFont(42);
   Graph_Graph01179->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01179->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01179->GetXaxis()->SetTitleFont(42);
   Graph_Graph01179->GetYaxis()->SetTitle("#deltaA_{EDM} / 125 MeV");
   Graph_Graph01179->GetYaxis()->CenterTitle(true);
   Graph_Graph01179->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01179->GetYaxis()->SetLabelFont(42);
   Graph_Graph01179->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01179->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01179->GetYaxis()->SetTitleFont(42);
   Graph_Graph01179->GetZaxis()->SetLabelFont(42);
   Graph_Graph01179->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01179->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01179);
   
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
