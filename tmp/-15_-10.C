void -15_-10()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 02:41:02 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h1_ratio__102 = new TH1D("h1_ratio__102","",630,-1575,1575);
   h1_ratio__102->SetBinContent(312,13);
   h1_ratio__102->SetBinContent(313,105.4364);
   h1_ratio__102->SetBinContent(314,194.4137);
   h1_ratio__102->SetBinContent(315,182.839);
   h1_ratio__102->SetBinContent(316,165.293);
   h1_ratio__102->SetBinContent(317,179.4565);
   h1_ratio__102->SetBinContent(318,159.2553);
   h1_ratio__102->SetBinContent(319,157.7615);
   h1_ratio__102->SetBinContent(320,140.2834);
   h1_ratio__102->SetBinContent(321,46.76179);
   h1_ratio__102->SetBinError(312,3.606235);
   h1_ratio__102->SetBinError(313,9.44502);
   h1_ratio__102->SetBinError(314,12.35537);
   h1_ratio__102->SetBinError(315,11.80908);
   h1_ratio__102->SetBinError(316,11.1709);
   h1_ratio__102->SetBinError(317,11.88983);
   h1_ratio__102->SetBinError(318,11.611);
   h1_ratio__102->SetBinError(319,12.54007);
   h1_ratio__102->SetBinError(320,14.12785);
   h1_ratio__102->SetBinError(321,15.5979);
   h1_ratio__102->SetEntries(1295.422);
   h1_ratio__102->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   h1_ratio__102->GetXaxis()->SetRange(296,335);
   h1_ratio__102->GetXaxis()->CenterTitle(true);
   h1_ratio__102->GetXaxis()->SetLabelFont(42);
   h1_ratio__102->GetXaxis()->SetTitleSize(0.04);
   h1_ratio__102->GetXaxis()->SetTitleOffset(1.1);
   h1_ratio__102->GetXaxis()->SetTitleFont(42);
   h1_ratio__102->GetYaxis()->SetTitle("Tracks");
   h1_ratio__102->GetYaxis()->CenterTitle(true);
   h1_ratio__102->GetYaxis()->SetNdivisions(4000510);
   h1_ratio__102->GetYaxis()->SetLabelFont(42);
   h1_ratio__102->GetYaxis()->SetTitleSize(0.04);
   h1_ratio__102->GetYaxis()->SetTitleOffset(1.1);
   h1_ratio__102->GetYaxis()->SetTitleFont(42);
   h1_ratio__102->GetZaxis()->SetLabelFont(42);
   h1_ratio__102->GetZaxis()->SetTitleOffset(1);
   h1_ratio__102->GetZaxis()->SetTitleFont(42);
   h1_ratio__102->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
