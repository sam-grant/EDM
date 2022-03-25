void S12S18_c_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 03:48:46 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(462.6813,-0.4273233,3034.593,1.186206);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1171[22] = {
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
   Double_t Graph0_fy1171[22] = {
   8.218724,
   3.133522,
   2.426394,
   -0.02843468,
   0.1841453,
   0.5172806,
   -0.2534723,
   -0.2201686,
   -0.3348958,
   -0.2162876,
   -0.043984,
   0.06378472,
   0.1212323,
   0.2066095,
   0.1680306,
   0.2031315,
   0.2419639,
   0.2322949,
   0.2757386,
   0.3672871,
   0.2703255,
   -0.007000196};
   Double_t Graph0_fex1171[22] = {
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
   Double_t Graph0_fey1171[22] = {
   0.8374602,
   0.07795033,
   0.03782349,
   0.02289952,
   0.01585703,
   0.01302894,
   0.01143537,
   0.0103325,
   0.009730654,
   0.009224852,
   0.009246364,
   0.008971321,
   0.009324868,
   0.009449159,
   0.009930848,
   0.01018301,
   0.01075396,
   0.01177701,
   0.01271911,
   0.01424621,
   0.03666843,
   0.2824946};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1171,Graph0_fy1171,Graph0_fex1171,Graph0_fey1171);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01171 = new TH1F("Graph_Graph01171","S12S18",100,114.7168,3140.495);
   Graph_Graph01171->SetMinimum(-0.2659704);
   Graph_Graph01171->SetMaximum(1.024853);
   Graph_Graph01171->SetDirectory(0);
   Graph_Graph01171->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01171->SetLineColor(ci);
   Graph_Graph01171->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01171->GetXaxis()->SetRange(21,88);
   Graph_Graph01171->GetXaxis()->CenterTitle(true);
   Graph_Graph01171->GetXaxis()->SetLabelFont(42);
   Graph_Graph01171->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01171->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01171->GetXaxis()->SetTitleFont(42);
   Graph_Graph01171->GetYaxis()->SetTitle("c [mrad] / 125 MeV");
   Graph_Graph01171->GetYaxis()->CenterTitle(true);
   Graph_Graph01171->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01171->GetYaxis()->SetLabelFont(42);
   Graph_Graph01171->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01171->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01171->GetYaxis()->SetTitleFont(42);
   Graph_Graph01171->GetZaxis()->SetLabelFont(42);
   Graph_Graph01171->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01171->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01171);
   
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
