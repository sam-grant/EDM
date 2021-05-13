void c_vs_p_slice_truth()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May  7 06:51:38 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-412.5,-0.1943479,3712.5,0.1010372);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1035[15] = {
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
   Double_t Graph0_fy1035[15] = {
   -0.0631859,
   -0.1331753,
   -0.1110492,
   -0.0816447,
   -0.0461389,
   -0.03691624,
   -0.01850554,
   -0.01044462,
   0.005014609,
   0.02068741,
   0.02404813,
   0.03010507,
   0.03933626,
   0.04822681,
   0.03441895};
   Double_t Graph0_fex1035[15] = {
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
   Double_t Graph0_fey1035[15] = {
   0.01854664,
   0.01194172,
   0.009154962,
   0.007515225,
   0.006181954,
   0.005312337,
   0.004726986,
   0.004277675,
   0.00393387,
   0.003712589,
   0.003564566,
   0.003493963,
   0.003474122,
   0.003579564,
   0.003982949};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1035,Graph0_fy1035,Graph0_fex1035,Graph0_fey1035);
   gre->SetName("Graph0");
   gre->SetTitle(";p [MeV]: in range p #minus 100 < p < p #plus 100 MeV;c [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01035 = new TH1F("Graph_Graph01035","",100,0,3300);
   Graph_Graph01035->SetMinimum(-0.1648094);
   Graph_Graph01035->SetMaximum(0.07149872);
   Graph_Graph01035->SetDirectory(0);
   Graph_Graph01035->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01035->SetLineColor(ci);
   Graph_Graph01035->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01035->GetXaxis()->CenterTitle(true);
   Graph_Graph01035->GetXaxis()->SetLabelFont(42);
   Graph_Graph01035->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01035->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01035->GetXaxis()->SetTitleFont(42);
   Graph_Graph01035->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01035->GetYaxis()->CenterTitle(true);
   Graph_Graph01035->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01035->GetYaxis()->SetLabelFont(42);
   Graph_Graph01035->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01035->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01035->GetYaxis()->SetTitleFont(42);
   Graph_Graph01035->GetZaxis()->SetLabelFont(42);
   Graph_Graph01035->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01035->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01035);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
