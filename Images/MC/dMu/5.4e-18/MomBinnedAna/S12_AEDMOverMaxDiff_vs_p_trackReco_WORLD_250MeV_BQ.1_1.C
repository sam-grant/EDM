void S12_AEDMOverMaxDiff_vs_p_trackReco_WORLD_250MeV_BQ.1_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:33:02 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.6966,-0.0008853859,3406.985,0.01424662);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1107[11] = {
   451.637,
   653.3997,
   880.2817,
   1123.202,
   1371.221,
   1620.119,
   1867.021,
   2114.924,
   2362.277,
   2614.139,
   2787.456};
   Double_t Graph0_fy1107[11] = {
   0.001440478,
   0.0007743354,
   0.001132991,
   0.001003578,
   0.001560004,
   0.001350865,
   0.001816404,
   0.001365726,
   0.001927163,
   0.002164382,
   0.004580734};
   Double_t Graph0_fex1107[11] = {
   0.1894701,
   0.1594013,
   0.115333,
   0.112845,
   0.1201609,
   0.1327309,
   0.1547769,
   0.1936791,
   0.2519213,
   0.3112052,
   0.3843093};
   Double_t Graph0_fey1107[11] = {
   0.001440851,
   0.0005427315,
   0.0003968696,
   0.0003744275,
   0.0004036443,
   0.0004520741,
   0.0005106647,
   0.000595558,
   0.0008415175,
   0.001147303,
   0.003562495};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1107,Graph0_fy1107,Graph0_fex1107,Graph0_fey1107);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01107 = new TH1F("Graph_Graph01107","S12_",100,217.8083,3021.48);
   Graph_Graph01107->SetMinimum(0.0006278153);
   Graph_Graph01107->SetMaximum(0.01273342);
   Graph_Graph01107->SetDirectory(0);
   Graph_Graph01107->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01107->SetLineColor(ci);
   Graph_Graph01107->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01107->GetXaxis()->SetRange(0,101);
   Graph_Graph01107->GetXaxis()->CenterTitle(true);
   Graph_Graph01107->GetXaxis()->SetLabelFont(42);
   Graph_Graph01107->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01107->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01107->GetXaxis()->SetTitleFont(42);
   Graph_Graph01107->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01107->GetYaxis()->CenterTitle(true);
   Graph_Graph01107->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01107->GetYaxis()->SetLabelFont(42);
   Graph_Graph01107->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01107->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01107->GetYaxis()->SetTitleFont(42);
   Graph_Graph01107->GetZaxis()->SetLabelFont(42);
   Graph_Graph01107->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01107->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01107);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
