void S12S18_Momentum_Y_RMS_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 03:48:47 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(462.6813,9.202445,3034.593,26.27409);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1177[22] = {
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
   Double_t Graph0_fy1177[22] = {
   13.03834,
   14.22676,
   15.15189,
   16.14448,
   16.57268,
   17.52587,
   18.30988,
   19.05679,
   19.70483,
   20.10809,
   20.4782,
   20.19182,
   20.05158,
   19.67288,
   19.23137,
   18.67316,
   17.87051,
   16.83642,
   15.73107,
   14.63461,
   13.82173,
   13.48853};
   Double_t Graph0_fex1177[22] = {
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
   Double_t Graph0_fey1177[22] = {
   0.222496,
   0.02510015,
   0.01519327,
   0.01118033,
   0.009106897,
   0.008618986,
   0.008569302,
   0.008660093,
   0.009016819,
   0.009349163,
   0.01018461,
   0.01065065,
   0.01186869,
   0.01281071,
   0.01426934,
   0.01540049,
   0.01702004,
   0.01933867,
   0.02155475,
   0.02460444,
   0.06394838,
   1.046913};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1177,Graph0_fy1177,Graph0_fex1177,Graph0_fey1177);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01177 = new TH1F("Graph_Graph01177","S12S18",100,114.7168,3140.495);
   Graph_Graph01177->SetMinimum(10.90961);
   Graph_Graph01177->SetMaximum(24.56693);
   Graph_Graph01177->SetDirectory(0);
   Graph_Graph01177->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01177->SetLineColor(ci);
   Graph_Graph01177->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01177->GetXaxis()->SetRange(21,88);
   Graph_Graph01177->GetXaxis()->CenterTitle(true);
   Graph_Graph01177->GetXaxis()->SetLabelFont(42);
   Graph_Graph01177->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01177->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01177->GetXaxis()->SetTitleFont(42);
   Graph_Graph01177->GetYaxis()->SetTitle("#sigma_{p_{y}} [MeV] / 125 MeV");
   Graph_Graph01177->GetYaxis()->CenterTitle(true);
   Graph_Graph01177->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01177->GetYaxis()->SetLabelFont(42);
   Graph_Graph01177->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01177->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01177->GetYaxis()->SetTitleFont(42);
   Graph_Graph01177->GetZaxis()->SetLabelFont(42);
   Graph_Graph01177->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01177->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01177);
   
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
