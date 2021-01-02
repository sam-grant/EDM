void y1_vs_theta_NSUBRUNS_200()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Nov 27 09:19:55 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-49.3125,0.503241,443.8125,0.8656061);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1022[24] = {
   15,
   30,
   45,
   60,
   75,
   90,
   105,
   120,
   135,
   150,
   165,
   180,
   195,
   210,
   225,
   240,
   255,
   270,
   285,
   300,
   315,
   330,
   345,
   360};
   Double_t Graph0_fy1022[24] = {
   0.6653082,
   0.6450339,
   0.6302432,
   0.6223329,
   0.6214532,
   0.6266019,
   0.6359772,
   0.6474892,
   0.6592913,
   0.6701902,
   0.6798322,
   0.6886222,
   0.6974123,
   0.7070542,
   0.7179532,
   0.7297552,
   0.7412672,
   0.7506425,
   0.7557912,
   0.7549115,
   0.7470012,
   0.7322105,
   0.7119363,
   0.6886222};
   Double_t Graph0_fex1022[24] = {
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
   0,
   0,
   0};
   Double_t Graph0_fey1022[24] = {
   0.0467778,
   0.06258163,
   0.05301332,
   0.05302185,
   0.05781806,
   0.05287383,
   0.05158509,
   0.0531709,
   0.05594899,
   0.05163577,
   0.04842322,
   0.04692268,
   0.0430195,
   0.04898282,
   0.0510374,
   0.05298345,
   0.05054993,
   0.04653093,
   0.04369071,
   0.05030034,
   0.0537179,
   0.05551214,
   0.04981982,
   0.05148338};
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1022,Graph0_fy1022,Graph0_fex1022,Graph0_fey1022);
   gre->SetName("Graph0");
   gre->SetTitle("200 sub-runs");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01022 = new TH1F("Graph_Graph01022","200 sub-runs",100,0,394.5);
   Graph_Graph01022->SetMinimum(0.5394775);
   Graph_Graph01022->SetMaximum(0.8293696);
   Graph_Graph01022->SetDirectory(0);
   Graph_Graph01022->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01022->SetLineColor(ci);
   Graph_Graph01022->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph01022->GetXaxis()->CenterTitle(true);
   Graph_Graph01022->GetXaxis()->SetLabelFont(42);
   Graph_Graph01022->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01022->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01022->GetXaxis()->SetTitleFont(42);
   Graph_Graph01022->GetYaxis()->SetTitle("#LTy_{1}#GT [mm]");
   Graph_Graph01022->GetYaxis()->CenterTitle(true);
   Graph_Graph01022->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01022->GetYaxis()->SetLabelFont(42);
   Graph_Graph01022->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01022->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01022->GetYaxis()->SetTitleFont(42);
   Graph_Graph01022->GetZaxis()->SetLabelFont(42);
   Graph_Graph01022->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01022->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01022);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.3769347,0.94,0.6230653,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("200 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
