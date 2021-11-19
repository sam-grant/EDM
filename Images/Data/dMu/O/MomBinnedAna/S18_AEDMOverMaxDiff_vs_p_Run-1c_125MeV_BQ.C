void S18_AEDMOverMaxDiff_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:59:44 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(530.6605,-0.01647004,2721.946,0.02904048);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1032[22] = {
   367.1695,
   457.1672,
   569.9915,
   694.434,
   815.6521,
   938.5283,
   1062.845,
   1188.203,
   1312.631,
   1435.697,
   1561.957,
   1685.048,
   1810.518,
   1934.935,
   2060.25,
   2184.735,
   2308.965,
   2433.42,
   2559.743,
   2677.947,
   2781.437,
   2884.329};
   Double_t Graph0_fy1032[22] = {
   0.006285221,
   0.0008303197,
   -0.0001636123,
   -0.0003371454,
   -0.0003733254,
   0.0001245153,
   4.920049e-05,
   -0.0001211654,
   2.789765e-05,
   -8.623946e-05,
   -0.0002912032,
   -0.0001547134,
   -0.0002749616,
   -0.0002629247,
   0.0004688237,
   -0.0004218314,
   0.0002684719,
   -0.0003587191,
   0.001261281,
   -0.00227578,
   0.0001042074,
   -0.003416053};
   Double_t Graph0_fex1032[22] = {
   0.2256843,
   0.1159461,
   0.07683435,
   0.05391212,
   0.04369731,
   0.03961808,
   0.03755871,
   0.03651898,
   0.03739335,
   0.03772291,
   0.04075554,
   0.04317573,
   0.04913531,
   0.05397125,
   0.06228492,
   0.06899389,
   0.08028826,
   0.09726218,
   0.1147976,
   0.1336637,
   0.2822085,
   1.333561};
   Double_t Graph0_fey1032[22] = {
   0.01517017,
   0.0007828927,
   -0.0003814188,
   -0.0002750208,
   -0.0001920347,
   0.0001912841,
   0.0001972546,
   -0.0001888742,
   0.0001614018,
   -0.0002055192,
   -0.0002591078,
   -0.0002565515,
   -0.0002835992,
   -0.0003193616,
   0.0003670759,
   -0.000461443,
   0.0004860355,
   -0.0006628459,
   0.0008985901,
   -0.0009956127,
   0.002582014,
   -0.1033853};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1032,Graph0_fy1032,Graph0_fex1032,Graph0_fey1032);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01032 = new TH1F("Graph_Graph01032","S18",100,115.072,3137.534);
   Graph_Graph01032->SetMinimum(-0.01191899);
   Graph_Graph01032->SetMaximum(0.02448943);
   Graph_Graph01032->SetDirectory(0);
   Graph_Graph01032->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01032->SetLineColor(ci);
   Graph_Graph01032->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01032->GetXaxis()->SetRange(22,79);
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
