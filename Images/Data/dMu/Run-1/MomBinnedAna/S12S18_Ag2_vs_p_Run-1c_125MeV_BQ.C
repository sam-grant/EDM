void S12S18_Ag2_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 03:48:46 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(462.6813,-0.07135546,3034.593,0.4571283);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1173[22] = {
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
   Double_t Graph0_fy1173[22] = {
   -1.498771,
   0.0474088,
   0.02110713,
   0.03544864,
   0.01592446,
   0.05248187,
   -0.005455173,
   0.01829293,
   0.007552638,
   -0.019991,
   -0.00162138,
   -0.01051104,
   0.01186715,
   0.001888412,
   -0.01988592,
   -0.02326807,
   -0.007037676,
   0.001294207,
   0.003624963,
   -0.001424916,
   0.06026089,
   0.5592715};
   Double_t Graph0_fex1173[22] = {
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
   Double_t Graph0_fey1173[22] = {
   1.181524,
   0.1100412,
   0.05338718,
   0.03228554,
   0.02235948,
   0.01838871,
   0.016135,
   0.01458017,
   0.01372826,
   0.01302054,
   0.01305088,
   0.01265934,
   0.01315297,
   0.0133481,
   0.01402888,
   0.01436588,
   0.01518256,
   0.01664141,
   0.01796018,
   0.02012058,
   0.0518199,
   0.37085};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1173,Graph0_fy1173,Graph0_fex1173,Graph0_fey1173);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01173 = new TH1F("Graph_Graph01173","S12S18",100,114.7168,3140.495);
   Graph_Graph01173->SetMinimum(-0.01850708);
   Graph_Graph01173->SetMaximum(0.4042799);
   Graph_Graph01173->SetDirectory(0);
   Graph_Graph01173->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01173->SetLineColor(ci);
   Graph_Graph01173->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01173->GetXaxis()->SetRange(21,88);
   Graph_Graph01173->GetXaxis()->CenterTitle(true);
   Graph_Graph01173->GetXaxis()->SetLabelFont(42);
   Graph_Graph01173->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01173->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01173->GetXaxis()->SetTitleFont(42);
   Graph_Graph01173->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 125 MeV");
   Graph_Graph01173->GetYaxis()->CenterTitle(true);
   Graph_Graph01173->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01173->GetYaxis()->SetLabelFont(42);
   Graph_Graph01173->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01173->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01173->GetYaxis()->SetTitleFont(42);
   Graph_Graph01173->GetZaxis()->SetLabelFont(42);
   Graph_Graph01173->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01173->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01173);
   
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
