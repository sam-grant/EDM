void full_c_vs_p_truth_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 19 17:16:07 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-420.75,-0.1940592,3456.75,0.1021471);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1037[15] = {
   100,
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t Graph0_fy1037[15] = {
   -0.0588725,
   -0.1295716,
   -0.1075846,
   -0.09142053,
   -0.04401136,
   -0.03387646,
   -0.02111937,
   -0.008328555,
   0.006256332,
   0.02144062,
   0.02541927,
   0.03502269,
   0.04343826,
   0.04825611,
   0.03434073};
   Double_t Graph0_fex1037[15] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t Graph0_fey1037[15] = {
   0.02346145,
   0.01511983,
   0.0115879,
   0.009512756,
   0.007824968,
   0.006721266,
   0.005980554,
   0.005410751,
   0.004972884,
   0.004693109,
   0.004505027,
   0.004413431,
   0.00438879,
   0.004523277,
   0.005027968};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1037,Graph0_fy1037,Graph0_fex1037,Graph0_fey1037);
   gre->SetName("Graph0");
   gre->SetTitle(";p [MeV]: in range p #minus 100 < p < p #plus 100 MeV;c [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01037 = new TH1F("Graph_Graph01037","",100,0,3300);
   Graph_Graph01037->SetMinimum(-0.1644385);
   Graph_Graph01037->SetMaximum(0.07252647);
   Graph_Graph01037->SetDirectory(0);
   Graph_Graph01037->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01037->SetLineColor(ci);
   Graph_Graph01037->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01037->GetXaxis()->SetRange(0,93);
   Graph_Graph01037->GetXaxis()->CenterTitle(true);
   Graph_Graph01037->GetXaxis()->SetLabelFont(42);
   Graph_Graph01037->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01037->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01037->GetXaxis()->SetTitleFont(42);
   Graph_Graph01037->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01037->GetYaxis()->CenterTitle(true);
   Graph_Graph01037->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01037->GetYaxis()->SetLabelFont(42);
   Graph_Graph01037->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01037->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01037->GetYaxis()->SetTitleFont(42);
   Graph_Graph01037->GetZaxis()->SetLabelFont(42);
   Graph_Graph01037->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01037->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01037);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
